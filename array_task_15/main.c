#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,index1=0,index2=0,length1,length2,sorted1;
    printf("enter the length of first array ");
    scanf("%i",&length1);
    int array[length1];
    printf("enter the elements : \n");
    for(i=0 ; i<length1; i++)
    {
        scanf("%i",&array[i]);
    }
    printf("enter the length of second array ");
    scanf("%i",&length2);
    int array2[length2];
    printf("enter the elements : \n");
    for(i=0 ; i<length2; i++)
    {
        scanf("%i",&array2[i]);
    }
    int k=length1+length2;
    int merge_array[k];
    i=0;
    while(index1<length1&&index2<length2)
    {
        if(array[index1]<=array2[index2])
        {
            merge_array[i]=array[index1];
            index1++;
        }
        else
        {
            merge_array[i]=array2[index2];
            index2++;
        }
        i++;
    }


    while(index1<length1)
    {

        merge_array[i]=array[index1];
        index1++;
        i++;
    }

    while(index2<length2)
    {

        merge_array[i]=array2[index2];


        index2++;
        i++;
    }



    for(int j=0; j<k; j++)
    {
        printf("%i  ",merge_array[j]);
    }

}
