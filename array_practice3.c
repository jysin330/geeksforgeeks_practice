#include <stdio.h>

int main()
{
    int arr[] = {30, 4, 8, 20, 6, 90};
    int temp,n=6;
    int k = 3;
    printf("array befor sorting---->\n");

    for (int i = 0; i < n; i++)
    {

        printf("arr[%d]=%d\n", i, arr[i]);
    }
    for (int i = 0; i < (n-1); i++)
    {

        for (int j = 1; j < (n-1- i); j++)
        {
            if (arr[i] > arr[j + i])
            {
                temp = arr[i];
                arr[i] = arr[j + i];
                arr[j + i] = temp;
            }
        }
    }
    printf("array after sorting---->\n");

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]=%d\n", i, arr[i]);
    }
    // printf("array of %d smallest no.is ", k);

    // for (int i = 0; i < k; i++)
    // {    if(i==(k-1))
    //    { 
    //        printf("%d.\n\n",  arr[i]);
    //    }
    //    else{
    //        printf("%d,",  arr[i]);

    //    }
    // }
    printf("%d is the %drd smallest number\n\n",arr[k-1],k);
    return 0;
}