#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,length,num,position ;
    printf("enter the length of array ");
    scanf("%i",&length);
    int array[length+1];
    printf("enter the elements : \n");
    for(i=0 ;i<length;i++){
        scanf("%i",&array[i]);
    }
    printf("enter the number and its  position  ");
    scanf("%i %i",&num,&position);

     for(i=length ;i>position-1;i--){
       array[i]=array[i-1];
    }
    array[position-1]=num;

     printf(" %i",array[0]);

     for(i=1 ;i<length+1;i++){
     printf(" ,%i",array[i]);
    }

    return 0;
}
