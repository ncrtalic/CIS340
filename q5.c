/*Noah Crtalic 2717249*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(int argc, char** argv) {
char c[32];
int n = 0;
printf("Enter a three-digit nonnegative binary number: ");
fgets(c, sizeof(c), stdin);
int len = strlen(c);
len--;
for(int i = len-1; i >= 0; i--)
if(c[i] == '1')
n += pow(2, len-i-1);
printf("The decimal number is %d\n", n);
    return (0);
}

