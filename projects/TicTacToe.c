#include <stdio.h>
#include <windows.h>

#define CLEAR "\033[2J\033[H"
#define COLOR_GREEN "\x1b[32m"
#define COLOR_YELLOW "\x1b[33m"
#define COLOR_RESET "\x1b[0m"
#define COLOR_CYAN "\x1b[36m"
#define COLOR_RED "\x1b[31m"

char board[3][3];
int comBoard[3][3];
int player;
int markCount;
int win_flag;
int com_flag;
int row, col;
int equalsTo;
int bestPosition;
int vMulti;
int hMulti;
int ldMutli;
int rdMulti;
int totalMulti;

int displayMenu();
void makeBoard();
void displayBoard();
void changePlayer();
void takeInput();
int isPlaceFilled(int, int);
void fillmark(int, int);
int checkWinner();
int checkWin(int, int);
int checkVertical(int j);
int checkHorizontal(int i);
int checkDiagonal();

int findBestPosition();
int vertical();
int horizontal();
int leftDiagonal();
int rightDiagonal();

int main()
{
    int option;
    while (1)
    {
        option = displayMenu();
        makeBoard();

        switch (option)
        {
        case 1:
        {
            printf(CLEAR);
            while (1)
            {
                printf(CLEAR);
                takeInput();
                if (checkWinner())
                    break;
                changePlayer();
            }
            break;
        }
        case 2:
        {
            com_flag = 1;
            printf(CLEAR);
            while (1)
            {
                printf(CLEAR);
                takeInput();
                if (checkWinner())
                    break;
                changePlayer();
            }
            break;
        }
        case 3:
        {
            exit(0);
        }
        default:
            printf(CLEAR COLOR_RED "Please Enter valid choice !\n" COLOR_RESET);
        }
    }
    return 0;
}

// display menu options
int displayMenu()
{
    int choice;

    printf("\n1. Want to play with player\n");
    printf("2. Want to play with Smart Computer\n");
    printf("3. Exit\n");
    printf("\nEnter your choice : ");

    fflush(stdin);
    scanf("%d", &choice);

    return choice;
}

// make board
void makeBoard()
{
    player = 0;
    markCount = 0;
    win_flag = 0;
    com_flag = 0;

    char temp = '0';

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ++temp;
            comBoard[i][j] = 2;
        }
}

// display board
void displayBoard()
{
    printf(COLOR_CYAN "\n*************** TIC TAC TOE ***************\n\n");
    !com_flag ? printf(COLOR_GREEN "First Player => X\n") : printf(COLOR_GREEN "First Player User=> X\n");
    !com_flag ? printf(COLOR_YELLOW "Second Player => O\n\n\n" COLOR_RESET) : printf(COLOR_YELLOW "Second player Computer => O\n\n\n" COLOR_RESET);

    for (int i = 0; i < 3; i++)
    {
        printf("     |     |   \n");

        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == 'X')
                printf(COLOR_GREEN);

            if (board[i][j] == 'O')
                printf(COLOR_YELLOW);

            printf("  %c  ", board[i][j]);
            printf(COLOR_RESET);

            if (j != 2)
                printf("|");
        }

        if (i != 2)
            printf("\n_____|_____|_____\n");
        else
            printf("\n     |     |   \n");
    }
}

// change player marker alternatively
void changePlayer()
{
    player = !player;
}

// check position filled or empty
int isPlaceFilled(int i, int j)
{
    if (board[i][j] == 'X' || board[i][j] == 'O')
        return 1;
    else
        return 0;
}

// take user input and manage all invalid input
void takeInput()
{
    int position, place, posFind_flag = 0;

    displayBoard();

    if (player && com_flag)
    {
        printf(COLOR_YELLOW "Player O => " COLOR_RESET);

        printf(COLOR_YELLOW "AI is thinking..." COLOR_RESET);
        position = findBestPosition();
        Sleep(3000);

        for (row = 0; row < 3; row++)
        {
            for (col = 0; col < 3; col++)
            {
                place = (row * 3) + (col + 1);

                if (place == position)
                {
                    posFind_flag = 1;
                    break;
                }
            }
            if (posFind_flag)
                break;
        }
        fillmark(row, col);
    }
    else
    {
        while (1)
        {
            if (player)
                printf(COLOR_YELLOW "Player O => " COLOR_RESET);
            else
                printf(COLOR_GREEN "player X => " COLOR_RESET);

            printf("Enter Marking place : ");
            fflush(stdin);
            scanf("%d", &position);

            if (position >= 1 && position <= 9)
            {
                for (row = 0; row < 3; row++)
                {
                    for (col = 0; col < 3; col++)
                    {
                        place = (row * 3) + (col + 1);
                        if (place == position)
                        {
                            posFind_flag = 1;
                            break;
                        }
                    }
                    if (posFind_flag)
                        break;
                }
                if (isPlaceFilled(row, col))
                {
                    printf(CLEAR COLOR_RED "position already filled\n" COLOR_RESET);
                }
                else
                {
                    fillmark(row, col);
                    break;
                }
            }
            else
                printf(CLEAR COLOR_RED "Enter valid position no 1 to 9 !\n" COLOR_RESET);
            displayBoard();
        }
    }
}

// check win or draw condition
int checkWinner()
{
    if (checkWin(row, col))
    {
        printf(CLEAR);
        displayBoard();
        player ? printf(COLOR_YELLOW) : printf(COLOR_GREEN);
        printf("Result => Player => %c win\n" COLOR_RESET, player ? 'O' : 'X');
        return 1;
    }
    else
    {
        if (markCount == 9)
        {
            printf(CLEAR);
            displayBoard();
            printf(COLOR_RED "Result => Draw !\n\n" COLOR_RESET);
            return 1;
        }
    }
    return 0;
}

// check winning situation
int checkWin(int row, int col)
{
    if (checkHorizontal(row) || checkVertical(col) || checkDiagonal())
        return 1;
    else
        return 0;
}

// check vertical winning
int checkVertical(int j)
{
    if (board[0][j] == board[1][j] && board[0][j] == board[2][j])
        return 1;
    else
        return 0;
}

// check horizontal winning
int checkHorizontal(int i)
{
    if (board[i][0] == board[i][1] && board[i][0] == board[i][2])
        return 1;
    else
        return 0;
}

// check diagonal winning
int checkDiagonal()
{
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2])
        return 1;
    else if (board[0][2] == board[1][1] && board[0][2] == board[2][0])
        return 1;
    else
        return 0;
}
// to fill mark in user selected position
void fillmark(int r, int c)
{
    if (player)
    {
        board[r][c] = 'O';
        comBoard[r][c] = 3;
    }
    else
    {
        board[r][c] = 'X';
        comBoard[r][c] = 1;
    }
    markCount++;
}

int vertical()
{
    vMulti = comBoard[0][col] * comBoard[1][col] * comBoard[2][col];
    if (vMulti == equalsTo)
        return 1;
    return 0;
}

int horizontal()
{
    hMulti = comBoard[row][0] * comBoard[row][1] * comBoard[row][2];
    if (hMulti == equalsTo)
        return 1;
    return 0;
}

int leftDiagonal()
{

    ldMutli = comBoard[0][0] * comBoard[1][1] * comBoard[2][2];
    if (ldMutli == equalsTo)
        return 1;
    return 0;
}

int rightDiagonal()
{

    rdMulti = comBoard[0][2] * comBoard[1][1] * comBoard[2][0];
    if (rdMulti == equalsTo)
        return 1;
    return 0;
}

int findBestPosition()
{
    int position;
    equalsTo = 27;
    totalMulti = 0;
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            if (comBoard[row][col] == 2)
            {
                position = (row * 3) + (col + 1);
                comBoard[row][col] = 3;
                if (position % 2 == 0) // for position 2,4,6,8
                {
                    if (vertical() || horizontal())
                    {
                        comBoard[row][col] = 2;
                        return position;
                    }
                    int temp = vMulti + hMulti + rdMulti + ldMutli;
                    if (temp > totalMulti)
                    {
                        totalMulti = temp;
                        bestPosition = position;
                    }
                }
                else
                {
                    if (position == 3 || position == 7) // for position 3,7
                    {
                        if (vertical() || horizontal() || rightDiagonal())
                        {
                            comBoard[row][col] = 2;
                            return position;
                        }
                        int temp = vMulti + hMulti + rdMulti + ldMutli;
                        if (temp > totalMulti)
                        {
                            totalMulti = temp;
                            bestPosition = position;
                        }
                    }
                    else
                    {
                        if (position == 1 || position == 9) // for position 1,9
                        {
                            if (vertical() || horizontal() || leftDiagonal())
                            {
                                comBoard[row][col] = 2;
                                return position;
                            }
                            int temp = vMulti + hMulti + ldMutli + rdMulti;
                            if (temp > totalMulti)
                            {
                                totalMulti = temp;
                                bestPosition = position;
                            }
                        }
                        else // for postion 5
                        {
                            if (vertical() || horizontal() || rightDiagonal() || leftDiagonal())
                            {
                                comBoard[row][col] = 2;
                                return position;
                            }
                            int temp = vMulti + hMulti + rdMulti + ldMutli;
                            if (temp > totalMulti)
                            {
                                totalMulti = temp;
                                bestPosition = position;
                            }
                        }
                    }
                }
                comBoard[row][col] = 2;
            }
        }
    }

    equalsTo = 3;
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            if (comBoard[row][col] == 2)
            {
                position = (row * 3) + (col + 1);
                comBoard[row][col] = 3;
                if (position % 2 == 0) // for position 2,4,6,8
                {
                    if (vertical() || horizontal())
                    {
                        comBoard[row][col] = 2;
                        return position;
                    }
                }
                else if (position == 3 || position == 7) // for position 3,7
                {
                    if (vertical() || horizontal() || rightDiagonal())
                    {
                        comBoard[row][col] = 2;
                        return position;
                    }
                }
                else if (position == 1 || position == 9) // for position 1,9
                {
                    if (vertical() || horizontal() || leftDiagonal())
                    {
                        comBoard[row][col] = 2;
                        return position;
                    }
                }
                else // for postion 5
                {
                    if (vertical() || horizontal() || rightDiagonal() || leftDiagonal())
                    {
                        comBoard[row][col] = 2;
                        return position;
                    }
                }
                comBoard[row][col] = 2;
            }
        }
    }

    if (comBoard[1][1] == 2)
        return 5;
    return bestPosition;
}
