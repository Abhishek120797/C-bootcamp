#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

#define CLEAR "\033[2J\033[H"
#define COLOR_RED     "\x1b[31m"
#define COLOR_GREEN   "\x1b[32m"
#define COLOR_YELLOW  "\x1b[33m"
#define COLOR_RESET   "\x1b[0m"
#define COLOR_CYAN    "\x1b[36m"

int matrix[4][4];
char playerName[50];
char ch;
int move;
int x;
int y;

//display Rules of game
void rules()
{
    printf(COLOR_YELLOW"****************MATRIX PUZZEL****************\n\n"COLOR_RESET);
    printf(COLOR_CYAN"RULES OF THIS GAME\n\n"COLOR_RESET);
    printf("1. You can move only one step at a time by arrow key\n");
    printf("\tMove Up    : by Up arrow key\n");
    printf("\tMove Down  : by Down arrow key\n");
    printf("\tMove Left  : by Left arrow key\n");
    printf("\tMove Right : by Right arrow key\n");
    printf(COLOR_CYAN"2. You can move number at empty position only\n\n");
    printf("3. For each valid move : your total number of move will decreased by 1\n");
    printf("4. Winning situation : Number in a 4*4 matrix should be in order from 1 to 15\n");
    printf(COLOR_GREEN"                Winninig Situation\n");
    printf("---------------------\n");
    printf("|  1 |  2 |  3 |  4 |\n");
    printf("|  5 |  6 |  7 |  8 |\n");
    printf("|  9 | 10 | 11 | 12 |\n");
    printf("| 14 | 15 | 16 |    |\n");
    printf("---------------------\n"COLOR_RESET);
    printf(COLOR_RED"You can exit the game at any time by pressing 'E' or 'e' \n"COLOR_RESET);
    printf("So try to win in minimum no of moves\n");
    printf(COLOR_RED"Enter any key to start...."COLOR_RESET);
}

//make matrix
void makeMatrix()
{
    int num[15];
    int randomIndex;
    int temp;
    for(int i = 0; i < 15; i++)
    {
        num[i] = i + 1;
    }
    srand(time(NULL));
    for(int i = 0; i < 15; i++)
    {
        randomIndex = rand()%15;
        temp = num[i];
        num[i] = num[randomIndex];
        num[randomIndex] = temp;
    }
    int index = 0;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(index < 15)
            {
                matrix[i][j] = num[index++];
            }
            else
            {
                matrix[i][j] = 0;
            }
        }
    }
    move=200;
    x=3;
    y=3;
}

//display matrix
void displayMatrix()
{
    printf("\n-------------------------\n");
    for(int i = 0; i < 4; i++)
    {
        printf("|");
        for(int j = 0; j < 4; j++)
        {
            if(matrix[i][j]==0)
            {
                printf("     |");
            }
            else
            {
                printf(" %2d  |",matrix[i][j]);
            }
        }
        printf("\n");
    }
    printf("-------------------------\n");
}

//check winning situation
int checkWin()
{   
    int num[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,0}};
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j<4;j++)
        {
            if(matrix[i][j]!=num[i][j])
            {
                return 0;
            }
        }
    }
    return 1;
}


void rightSift(int i,int j)
{
    int temp=matrix[i][j];
    matrix[i][j]=matrix[i][j-1];
    matrix[i][j-1]=temp;
    y=j-1;
    move--;
}

void leftShift(int i,int j)
{
    int temp=matrix[i][j];
    matrix[i][j]=matrix[i][j+1];
    matrix[i][j+1]=temp;
    y=j+1;
    move--;
}

void upshift(int i,int j)
{
    int temp=matrix[i][j];
    matrix[i][j]=matrix[i+1][j];
    matrix[i+1][j]=temp;
    x=i+1;
    move--;
}

void downshift(int i,int j)
{
    int temp=matrix[i][j];
    matrix[i][j]=matrix[i-1][j];
    matrix[i-1][j]=temp;
    x=i-1;
    move--;
}

int main()
{
    printf("\n\n\nEnter Player Name : ");
    gets(playerName);
    printf(CLEAR);
    rules();

    ch = getch();
    if(ch == 'E'|| ch == 'e')
        return 0;
    fflush(stdin);
    printf(CLEAR);
    makeMatrix();

    while(1)
    {
        printf(CLEAR);
        printf("Player Name : %s , Move Reamaning : %d\n",playerName,move);
        displayMatrix();
        ch = getch();
        if(ch == 0 || ch == 224)
            ch=getch();
        switch(ch)
        {
            case 72:
                {
                    if(x!=3)
                        upshift(x,y);
                    break;
                }
            case 80:
                {
                    if(x!=0)
                        downshift(x,y);
                    break;
                }
            case 75:
                {
                    if(y!=3)
                        leftShift(x,y);
                    break;
                }
            case 77:
                {
                    if(y!=0)
                        rightSift(x,y);
                    break;
                }
        }
        if(checkWin())
        {
            printf("Player Name : %s , Move Reamaning : %d\n",playerName,move);
            displayMatrix();
            printf("******CONGRATULATION YOU WON THE GAME******\n\n");
            printf("To play again Enter 'y'?\n");
            printf("For Exit press any key : ");
            ch=getch();
            if(ch != 'Y' && ch != 'y')
                return 0;
            else
                makeMatrix();
        }
        else
        {
            if(move==0)
            {
                printf(CLEAR);
                printf("Player Name : %s , Move Reamaning : %d\n",playerName,move);
                displayMatrix();
                printf(COLOR_RED"\tYOU LOSE !\n\n"COLOR_RESET);
                printf("you Want to play again ?\n");
                printf(COLOR_RED"Enter 'y' to play again OR ");
                printf("For Exit press any key : "COLOR_RESET);
                ch=getch();
                if(ch != 'Y' && ch != 'y')
                    return 0;
                else
                    makeMatrix();
            }
        }
    }
    return 0;
}

