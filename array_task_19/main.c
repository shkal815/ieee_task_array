#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,temp,length,maxsize=100,j=0 ;
    printf("enter the length of array ");
    scanf("%i",&length);
    int array[maxsize];
    printf("enter the elements : \n");
    for(i=0 ; i<length; i++)
    {
        scanf("%i",&array[i]);
    }

    for(i=0 ; i<length; i++)
    {
        for(j=i+1; j<length; j++)
        {
            if(array[i]>array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    printf("%i",array[0]);
    for (i=1; i<length; i++)
    {
        printf(", %i",array[i]);
    }


    return 0;
}
