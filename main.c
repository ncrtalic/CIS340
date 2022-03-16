//Noah Crtalic 2717249 

#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[])
{
   int counter;
//argc contains the number of argument passed
//argv contain all the arguments
   if(argc<3 || argc>7)
{
//invalid number of arguments
printf("\nplease pass appropriate number of command line attributes");
}
else
{
//printing all the arguments
         
       printf("\nNumber Of Arguments Passed: %d\n",argc-1);

//looping through all arguments
       for(counter=1;counter<argc;counter++)
{ //if is at even place but here odd as numbering from 1
if(counter%2==0){
printf("%c ",argv[counter][1]);
}
//odd place
else
{
printf("%c ",argv[counter][0]);
}
}
   }
   return (0);
}
