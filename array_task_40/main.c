#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0,array1[3][3],array2[3][3] , condation=1 ;
    printf("please enter the element of the first matrix:\n");
    for(i=0 ; i<3; i++)
    {
        for(j=0 ; j<3; j++)
        {
            scanf("%i",&array1[i][j]);
        }
    }

    for(i=0 ; i<3; i++)
    {
        for(j=0 ; j<3; j++)
        {
            array2[i][j]=array2[j][i];
        }
    }
     for(i=0 ; i<3; i++)
    {
        for(j=0 ; j<3; j++)
        {
           if(array1[i][j]!=array2[i][j])
           {
               condation=0;
                break;
           }
        }
        printf("\n");
    }

   if(condation)
   {
       printf("\nThe given matrix is Symmetric matrix: \n");
   }

   else
   {
       printf("\nThe given matrix is not Symmetric matrix: \n");
   }

    return 0;
}
