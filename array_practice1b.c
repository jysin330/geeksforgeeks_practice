/* Given an array arr[] and size of array is n and one another key x, and give you a segment size k. The task is to find that the key x present in every segment of size k in arr[].*/

#include <stdio.h>
int check_key(int ptr[], int n, int x, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n;)
    {
        for (int j = 0; j < k;)
        {
                if (ptr[i + j] == x)
                {

                    count = count + 1;
                    j = k;
                }
                else
                {
                    count = count + 0;
                    j++;
                }
            }
       
        i = i + k;
    }
    return count;
}
int main()
{
    int n = 11;
    int arr[11], x, k;
    printf("enter the key: ");
    scanf("%d", &x);
    printf("enter the segment size : ");
    scanf("%d", &k);
    int result = check_key(arr, n, x, k);
    int count, num;
    if (n % k == 0)
    {
        num = n / k;
        count = num;
    }
    else
    {
        num = n / k;
        count = num + 1;
    }
    if (result == count)
    {
        printf("%d present in all segment.\n", x);
    }
    else
    {
        printf("%d not present in all segment.\n", x);
    }
    return 0;
}