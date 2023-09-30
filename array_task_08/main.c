#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,length ;
    printf("enter the length of array ");
    scanf("%i",&length);
    int array[length],array2[length];
    printf("enter the elements : \n");
    for(i=0 ;i<length;i++){
        scanf("%i",&array[i]);
    }
    for(i=0 ;i<length;i++){
       array2[i]=array[i];
    }

    printf("the elements of first array  are: %i ",array[0]);
     for(i=1 ;i<length;i++){
       printf(", %i ",array[i]);
    }
     printf("\nthe elements of second  are: %i ",array2[0]);
     for(i=1 ;i<length;i++){
       printf(", %i ",array2[i]);
    }
    return 0;
}
