#include<stdio.h>
/*
As said earlier in Pascal's Triangle;
I'm Abhinav Jha and all of this documentation is done by me to make my program Readable and more understable for the fellow programmer , Along with this I Follow 
good programming practices which incorporate proper WHITESPACING and INDENTAION. So , Don't even consider this as an AI generated SLOP. :)
This program takes the input from the user of the number of stairs he or she might want to climb and then calculates the number of distinct ways the person can climb
that stair climbing only 1 or 2 step at a time.
We have used two different functions to execute this whole program one being climbStairs for the main part of the calculations and the other one being main to execute and
call the climbStairs function.
There are four different functions defined and used int this entire program each one of them being:
1. n being the integer which will help in getting the values out to call the climbStairs function.
2. prev1 and prev2 being the integers used in assigning and calculating the values of number of discrete steps in the calculation.
3. current being the integer to be assigned .
4. x being the integer to store the number of steps the user might want to climb up to and is helping in calling the climbStairs function.
 */
int climbStairs(int n) {
    if ( n <= 1 ) {
        return 1;
    }

    int prev1 = 1, prev2 = 1;
    for (int i = 2; i <= n; ++i) {
        int current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }

    return prev1;
}

int main() {
    printf("How many stairs do you want to climb?\n");
    int x;
    scanf("%d" , &x);
    printf("Number of ways to climb %d stairs: %d\n", x, climbStairs(x));
    return 0;
}
