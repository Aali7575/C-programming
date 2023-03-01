#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
/**I was trying to create a game that would make one throw 3 dice 
*then add the total of the 3 numbers give dice and give you the total*/

int main()
{
    //int i;
    int a;
    int b;
    int c;

    //for (i=0;i<20;i++)
    
    a=(rand()%6)+1;
    b=(rand()%6)+1;
    c=(rand()%6)+1;


    int totalroll;
    totalroll = a + b + c;{
        printf("Your number is : %d\n", totalroll);
    }
  
    return (0);

}