#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/* 
 * More headers goes here.
 * betty style doc for function main goes there
 */

int main(void){
    int n;
    srand(time(0));
    
    n = rand() - RAND_MAX / 2;
    
    if (n > 0)
        printf("%i is positive\n", n);
    
    else if (n < 0)
        printf("%i is negative\n", n);
    
    else
        printf("%i is zero\n", n);

   return(0);
}
