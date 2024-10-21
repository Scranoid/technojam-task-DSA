#include<stdio.h>
#include<string.h>
#define MAXINP 100
/*
As said earlier in Bitwar's Comments;
I'm Abhinav Jha and all of this documentation is done by me to make my program Readable and more understable for the fellow programmer , Along with this I Follow 
good programming practices which incorporate proper WHITESPACING and INDENTAION. So , Don't even consider this as an AI generated SLOP. :)
This is rather a tricky set of code so I'll explain it by breaking it into simpler pieces of code;
At first we define a constant named MAXINP and giving it value of 100 which is going to be used to define the char array's memory named as str.
Now , the main calculative part is done in the body of the FOR loop before that I initialized two very important things for the functioning of this program,
I declared the first letter as current and took count as the variable for storing the number of variables as 1;
After which I declared a FOR loop which will be using an IF ELSE statement;
Now , about the variables I used count to append the value of repeating characters into count and so forth , the ELSE statement prints the values;
*/
int main() {
    char str[MAXINP];
    printf("Enter a string you want to compress:\n");
    gets(str);
    char current = str[0];
    int count =1;
    for (int i = 1 ; str[i] != '\0' ; i++) {
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
