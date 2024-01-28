// . Create an authentication system. It should be menu driven

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_USER 5

int user_count = 0;
char user[MAX_USER][2][25] = {0};

void registerUser()
{
    int i;
    char temp_user[25];
    if (user_count == MAX_USER)
        printf("Maximum number of users reached.\n");
    else
    {
        printf("For registration provide details !\n");
        printf("Enter username: ");
        fflush(stdin);
        fgets(temp_user, 25, stdin);
        for (i = 0; i < user_count; i++)
        {
            if (strcmp(temp_user, user[i][0]) == 0)
            {
                printf("\nuser already registerd !\nplease Log In\n");
                break;
            }
        }
        if (i >= user_count)
        {
            strcpy(user[user_count][0], temp_user);
            printf("Enter password: ");
            fgets(user[user_count][1], 25, stdin);
            printf("User registered successfully!\n");
            user_count++;
        }
    }
}

void loginUser()
{
    char username[25], password[25];
    int i;
    printf("For Log In provide credential !\n");
    printf("Enter username: ");
    fflush(stdin);
    fgets(username, 25, stdin);

    printf("Enter password: ");
    fgets(password, 25, stdin);

    for (i = 0; i < user_count; i++)
    {
        if (strcmp(user[i][0], username) == 0 && strcmp(user[i][1], password) == 0)
        {
            printf("Login successful!\n");
            break;
        }
    }
    if (i >= user_count)
        printf("Invalid username or password.\n");
}

int main()
{
    char choice;

    while (1)
    {
        printf("\n----- Authentication System -----\n");
        printf("1. Register\n");
        printf("2. Login\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        fflush(stdin);
        scanf("%c", &choice);

        switch (choice)
        {
        case '1':
            registerUser();
            break;
        case '2':
            loginUser();
            break;
        case '3':
            printf("Exiting program.\n");
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    }

    return 0;
}
