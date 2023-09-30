#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,length,sum=0 ;
    printf("enter the length of array ");
    scanf("%i",&length);
    int array[length];
    printf("enter the elements : \n");
    for(i=0 ;i<length;i++){
        scanf("%i",&array[i]);
    }

     for(i=0 ;i<length;i++){
       sum+=array[i];
        }

     printf("the sum of elements of array = %i",sum);

    return 0;
}
