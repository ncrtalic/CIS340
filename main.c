
#include <stdio.h>
#include <math.h>


/*
 * 
 */
int main(int argc, char** argv) {
    int n,i;
    int d2,count, /*the code will fail here as the line must end with a semicolon ";" instead of a comma ","*/
    double d1;
    
    while (1)
    {
        printf("Enter a number (0 to quit): ");
        scanf("%d", &n);
        if (n == 0)
            break;
        count=0;
        for (i=0; i<n; i++) /* The code will fail at  this line because a 
                             * divide error will occur. It should instead be
                             * for(i=1; i <n; i++) 
                             * replacing the 0 with a 1 */
        {
            d1=(double)n/(double)i;
            d2=n/i;
            if (fabs(d1-(double)d2) < 0.00001)
                count++;
        }
        if (count == 2)
            printf("%d is prime\n", n);
        else
            printf("%d is not prime\n", n);
    }
}

