#include<stdio.h>
/*
First of all we are initializing five variables here and each of their uses have been mentioned there as well:
1. variable n , Which is going to be used for taking the input from the user for number of rows and storing in that variable.
2. variable x , Which is going to be used for calculating the spacing of each number going to be oriented from the right side of the screen.
3. variable i , Which is going to start the main FOR loop body of the program.
4. variable j , Which is going to be used to start the FOR loop that is going to calculate the values which are going to be printed on the screen.
5. variable value , Which is going to store the data that is going to be printed on the screen for printing Pascal's Triangle.
*/
int main()
{
    int n = 0;
    int value = 1;
    int x = 0;
    int j;
    printf("How many rows do you want the Pascal's Triangle to go to : \n");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (x = 0; x <= (n - i); x++)
        {
            printf(" ");

        }
        for (j = 1; j <= i; j++)
        {
            if (i == 1 , j == 1)
            {
                value = 1;
            }
            else
            {
            value = value * (i - j + 1) / (j - 1);
            }
            printf("%2d", value);
        }
        printf("\n");
    }
}