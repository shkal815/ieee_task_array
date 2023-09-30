#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,length,the_largest=0,the_second_largest=0 ;
    printf("enter the length of array ");
    scanf("%i",&length);
    int array[length];
    printf("enter the elements : \n");
    for(i=0 ;i<length;i++){
        scanf("%i",&array[i]);
    }
    the_largest=array[0];
     for(i=0 ;i<length;i++){
      the_second_largest=the_largest;
        if(array[i]>the_largest)
        {
            the_largest=array[i];
        }
    }
    printf("the largest number = %i \nthe second largest number = %i ",the_largest,the_second_largest);
    return 0;
}
