#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0,array1[3][3],array2[3][3],difference_array[3][3] ;
    printf("please enter the element of the first matrix:\n");
    for(i=0 ; i<3; i++)
    {
        for(j=0 ; j<3; j++)
        {
            scanf("%i",&array1[i][j]);
        }
    }
    printf("please enter the element of the second  matrix:\n");
    for(i=0 ; i<3; i++)
    {
        for(j=0 ; j<3; j++)
        {
            scanf("%i",&array2[i][j]);
        }
    }
     for(i=0 ; i<3; i++)
    {
        for(j=0 ; j<3; j++)
        {
            difference_array[i][j]=array1[i][j]-array2[i][j];
        }
        printf("\n");
    }

    for(i=0 ; i<3; i++)
    {
        for(j=0 ; j<3; j++)
        {
            printf("  %i  ",difference_array[i][j]);
        }
        printf("\n");
    }



    return 0;
}
