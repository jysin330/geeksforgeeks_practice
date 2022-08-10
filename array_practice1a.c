# include<stdio.h>

int main(){
    int x, k,n,count=0;
    int arr[20], no_of_segments;
    printf("enter size: ");
    scanf("%d",&n);

    for(int i=0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter key value: ");
    scanf("%d",&x);
    printf("key=%d\n",x);
    printf("enter segment size: ");
    scanf("%d",&k);
    int r=k;
    if(n%k==0)
    {
        no_of_segments=n/k;
        printf("no of segment=%d\n",no_of_segments);
    }
    else{
        no_of_segments=(n/k)+1;
        printf("no of segment=%d\n",no_of_segments);
    }
    for(int i=0;i<k;i++)
    {
        if(arr[i]==x)
        {
            count=count+1;
            while(k<n){
                
             for(i=k;i<2*k;)
                {
                    if(arr[i]==x)
                    {
                       count=count+1;
                             i=2*k;
                            
                    } 
                    else
                    {
                        count=count+0;
                        i++;
                    }

                }
                    k+=r;
              
            }
        }
    }
    printf("count=%d\n",count);
        if(count==no_of_segments)
        {
            printf("yes!");
        }
        else
        {
            printf("no!");
        }
         
   

    return 0;
}