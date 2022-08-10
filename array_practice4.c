# include<stdio.h>

int main(){
    int n=6,temp,arr[]={0,1,1,2,1, 0};
    for (int i = 0; i < (n); i++)
    {

        for (int j = 1; j < (n- i); j++)
        {
            if (arr[i] > arr[j + i])
            {
                temp = arr[i];
                arr[i] = arr[j + i];
                arr[j + i] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {

        printf("arr[%d]=%d\n", i, arr[i]);
    }
    return 0;
}