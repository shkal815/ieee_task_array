#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,length ;
    printf("enter the length of array ");
    scanf("%i",&length);
    int array[length];
    printf("enter the elements : \n");
    for(i=0 ;i<length;i++){
        scanf("%i",&array[i]);
    }
    printf("the elements are: %i ",array[0]);
     for(i=1 ;i<length;i++){
       printf(", %i ",array[i]);
    }
    return 0;
}
