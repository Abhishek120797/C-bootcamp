// Suppose we have a list of email addresses, check whether all email addresses have
// ‘@’ in it. Print the odd email out

#include <stdio.h>
#include <string.h>

int main()
{
    char email[][30] = {"abhi.jais1211@gmail.com", "vicky@gmail.com",
                        "anchal1211gmail.com", "ajstyle12@gmail.com",
                        "avi1211gmail.com"};

    for (int i = 0; i < 5; i++)
    {
        if (strchr(email[i], '@') != 0)
        {
            printf("%s\n", email[i]);
        }
    }

    return 0;
}