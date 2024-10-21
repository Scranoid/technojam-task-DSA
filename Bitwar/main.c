#include <stdio.h>
/*
Here I have create two functions one being bitwisecall which is doing the main calculation for the Bitwise Operator and the other one being the main which takes the 
input from the user and calls the bitwisecall function which in turn returns the value to display on the screen.
*/
int bitwisecall( int p, int q ) {
    while (q > p) {
        q = p & (q - 1);
    }
    return q;
}

int main() {
    int Leftval, Rightval;
    printf("Enter the value of Left:\n");
    scanf("%d", &Leftval);
    printf("Enter the value of Right:\n");
    scanf("%d", &Rightval);
    int result = bitwisecall(Leftval , Rightval);
    printf("Bitwise AND of all integers between %d and %d is: %d\n", Leftval, Rightval, result);

    return 0;
}
