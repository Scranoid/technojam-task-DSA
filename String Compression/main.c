#include<stdio.h>
#include<string.h>
#define MAXINP 100
int main() {
    char str[MAXINP];
    printf("Enter a string you want to compress:\n");
    gets(str);
    //Assuming first letter as current and taking count as the variable for storing the number of variables as 1
    char current = str[0];
    int count =1;
    for (int i = 1; str[i] != '\0'; i++) {
        if (current == str[i]) {
            count++;
        }
        else {
            printf("%c%d" , current , count);
            current = str[i];
            count = 1;
        }
    }
    printf("%c%d" , current , count);
    return 0;

}
