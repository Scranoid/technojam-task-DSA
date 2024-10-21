#include <stdio.h>

int rangeBitwiseAnd( int Left, int Right ) {
    while (Right > Left) {
        Right = Right & (Right - 1);
    }
    return Right;
}

int main() {
    int Left, Right;
    printf("Enter the value of Left:\n");
    scanf("%d", &Left);
    printf("Enter the value of Right:\n");
    scanf("%d", &Right);

    int result = rangeBitwiseAnd(Left , Right);
    printf("Bitwise AND of all integers between %d and %d is: %d\n", Left, Right, result);

    return 0;
}