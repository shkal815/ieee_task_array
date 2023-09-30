#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0,array1[3][3],array2[6],sum=0;
    printf("please enter the element of the matrix:\n");
    for(i=0 ; i<3; i++)
    {
        for(j=0 ; j<3; j++)
        {
            scanf("%i",&array1[i][j]);
        }
    }

    {
        for(j=0 ; j<3; j++)
        {
            sum+=array1[i][j];
        }
        array2[i]=sum;
        sum=0;
    }
    for(i=0 ; i<3; i++)
    {
        for(j=0 ; j<3; j++)
        {
            sum+=array1[j][i];
        }
        array2[i+3]=sum;
        sum=0;
    }
    for(i=0 ; i<6; i++)
    {
        if(i<3)
        {
            printf(" the sum of row %i = %i \n",i+1,array2[i]);
        }
        else
        {
            printf(" the sum of column %i = %i \n",i+1
                   ,array2[i]);
        }
    }


    return 0;
}
