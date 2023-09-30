#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,length ;
    printf("enter the length of array ");
    scanf("%i",&length);
    int array1[length],array2[length];
    printf("enter the elements : \n");
    for(i=0 ;i<length;i++){
        scanf("%i",&array1[i]);
    }
    for(i=0 ;i<length;i++){
        array2[length-i-1]=array1[i];
    }
    printf("the reverse of array: \n %i",array2[0]);

    for(i=1;i<length;i++){
        printf(", %i ",array2[i]);
    }

    return 0;
}
