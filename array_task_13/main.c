#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0,length,number_of_duplicate =0 ;
    printf("enter the length of array ");
    scanf("%i",&length);
    int array[length];
    printf("enter the elements : \n");
    for(i=0 ; i<length; i++)
    {
        scanf("%i",&array[i]);
    }
    for(i=0 ; i<length; i++)
    {
        for(j=i+1; j<length; j++)
        {

            if(array[i]==array[j])
            {
                number_of_duplicate++;
                break;
            }
        }
    }
    printf("Total number of duplicate elements =%i",number_of_duplicate);
    return 0;
}
