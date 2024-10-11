#include <stdio.h>

int main()
{
    // for loop = repeats a section of code a limited amount of times

    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }

    // while loop = repeats a section of code possibly unlimited times.
    // WHILE some condition remains true
    // a while loop might not execute at all

    char name[25];

    printf("\nWhat's your name?: ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0)
    {
        printf("\nYou did not enter your name");
        printf("\nWhat's your name?: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s", name);

    // while loop = checks a condition, THEN executes a block of code if condition is true
    // do while loop = always executes a block of code once, THEN checks a condition

    int number = 0;
    int sum = 0;

    do
    {
        printf("Enter a # above 0: ");
        scanf("%d", &number);
        if (number > 0)
        {
            sum += number;
        }
    } while (number > 0);

    printf("sum: %d", sum);

    // nested loop = a loop inside of another loop

    int rows;
    int columns;
    char symbol;

    printf("\nEnter # of rows: ");
    scanf("%d", &rows);

    printf("Enter # of columns: ");
    scanf("%d", &columns);

    scanf("%c"); // clears \n from buffer

    printf("Enter a symbol to use: ");
    scanf("%c", &symbol);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            printf("%d", symbol);
        }
        printf("\n");
    }
    return 0;
}