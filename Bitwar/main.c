#include <stdio.h>

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
