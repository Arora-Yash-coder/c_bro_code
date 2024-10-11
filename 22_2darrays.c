#include <stdio.h>
#include <string.h>

int main()
{
    // 2D array = an array, where each element is an entire array
    //            useful if you need a matrix, grid, or table of data
    /*
    int numbers[2][3] = {
                         {1, 2, 3},
                         {4, 5, 6}
                        };
    */
    int numbers[2][3]; // Required to have the max size of elements within inner array

    int rows = sizeof(numbers) / sizeof(numbers[0]);
    int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);

    printf("rows: %d\n", rows);
    printf("columns: %d\n", columns);

    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    // Array of Strings
    char cars[][10] = {"Mustang", "Corvette", "Camaro"};

    // cars[0] = "Tesla"; Does not Work Use strcpy function to update a string
    strcpy(cars[0], "Tesla");

    for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }

    return 0;
}