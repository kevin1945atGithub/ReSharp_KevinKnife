#include <stdio.h>
//#include <stdlib.h>

#include "max.h"

int main()
{
    printf("Hello World!\n");

    int a, b;
    a = 10;
    b = 20;

//    printf("Give me the value of a,b seperated with whitespaces:\n");
//    scanf("%d,%d",&a,&b);

    int c = Max(a,b); 
    printf("the Max is: %d\n", c);

    return 0;
}

