// Week 5, Session 2

#include <stdio.h>
#include <string.h>

int main(void)
{
    /* Task 1.2a
     * Complete the following while loop in C to ask user input for a password
     * until 'secure123' is entered.
     */
    char password[50];
    int check = 1;

    while (check != 0)
    {
        /* code */
        printf("Please enter your password: ");
        scanf("%s", password);
        printf("%s\n", password);
        check = strcmp(password, "secure123");

        if (check != 0)
        {
            printf("Password is incorrect! Please try again\n");
        }
        
    }
    printf("Password is correct, Welcome back!\n");

    // compare using strcmp(str1,str2) from week 4
    // complete the rest of the code here

    return 0;
}