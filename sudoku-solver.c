#include <stdio.h>
#include <stdlib.h>

#define SIZE 9

int input(int (*grid)[SIZE]);
int validation(int (*grid)[SIZE]);
int solving(int (*grid)[SIZE]);

int main()
{
    int grid[SIZE][SIZE];

    printf("Sudoku solver...\n");

    if (input(grid) || validation(grid) || solving(grid))
    {
        printf("Error\n");
        return 1;
    }

    printf("Everything ran successfully\n");
    return 0;
}

int input(int (*grid)[SIZE])
{
    int row, column;
    char* temp = malloc(sizeof(char) * (SIZE + 1));

    printf("Input beginning...\n");

    for (row = 0; row < SIZE; row++)
    {
        printf("Row %d: ", (row + 1));
        scanf("%s", temp);
//45
        if (temp[9] != '\0')
        {
            printf("More than 9 digits has been detected. Please input exactly 9 digits\n");
            printf("Input is bad\n");
            free(temp);
            return 1;
        }

        for (column = 0; column < SIZE; column++)
        {
            //sum += temp[column] - '0';
            if (temp[column] == '\0')
            {
                printf("Less than 9 digits has been detected. Please enter exactly 9 digits\n");
                printf("Input is bad\n");
                free(temp);
                return 1;
            }
            else if (temp[column] < '0' || temp[column] > '9')
            {
                printf("Invalid symbol has been detected. Please enter only digits\n");
                printf("Input is bad\n");
                free(temp);
                return 1;
            }

            grid[row][column] = temp[column] - '0';
        }
    }

    printf("Input is successful\n");
    free(temp);
    return 0;
}

int validation(int (*grid)[SIZE])
{
    printf("Validation beginning...\n");

    printf("Validation is successful\n");
    return 0;
}

int solving(int (*grid)[SIZE])
{
    printf ("Solving beginning...\n");
    
    printf ("Solving is successful\n");
    return 0;
}
