#include <stdio.h>
#include <stdlib.h>

#define SIZE 9

int main();
int input();
int validation();
int solving();

int grid[SIZE][SIZE];

int main()
{
    printf("Sudoku solver...\n");

    if (input() || validation() || solving())
    {
        printf("Error");
        return 1;
    }

    printf("Everything ran successfully\n");
    return 0;
}

int input()
{
    int row, column;
    char* temp = malloc(sizeof(char) * SIZE);

    printf("Input beginning...\n");

    for (row = 0; row < SIZE; row++)
    {
        printf("Row %d: ", (row + 1));
        scanf("%s", temp);
//45
        if (temp[9] != '\0')
        {
            printf("More than 9 numbers has been detected\n");
            free(temp);
            return 1;
        }

        for (column = 0; column < SIZE; column++)
        {
            //sum += temp[column] - '0';
            if (temp[column] == '\0')
            {
                printf("Less than 9 numbers has been detected\n");
                free(temp);
                return 1;
            }
            else if (temp[column] < '0' || temp[column] > '9')
            {
                printf("Invalid symbol has been detected\n");
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

int validation()
{
    printf("Validation beginning...\n");

    printf("Validation is successful\n");
    return 0;
}

int solving()
{
    printf ("Solving beginning...\n");
    
    printf ("Solving is successful\n");
    return 0;
}
