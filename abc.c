/*Noah Crtalic*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {

int i,j;

char str[50][75], cmp[50];

printf("Enter 10 words:\n");

for(i=0; i<10; ++i)

scanf("%s[^\n]",str[i]);

for(i=0; i<9; ++i)

for(j=i+1; j<10 ; ++j)

{

if(strcmp(str[i], str[j])>0)

{

strcpy(cmp, str[i]);

strcpy(str[i], str[j]);

strcpy(str[j], cmp);

}

}

printf("\nDictionary Order: \n");

for(i=0; i<10; ++i)

{

printf("%s ",str[i]);

}

return 0;

}

