# include<stdio.h>

int main(){
    int a[5]={1, 2 ,3 ,4 ,5},n=0;
    int b[3]={3,4,5};
    
    for(int i=0;i<5;i++){
    int uni[1+n];
        if(i<3){
            if(a[i]==b[i]){
                 uni[n]=a[i];
                 n++;
            }
            else{
                uni[n]=a[i];
                n=n+1;
                uni[n]=b[i];
                n=n+1;
            }
        }
        else if(i==5){
    for(int i=0; i<10;i++){
        printf("uni[%d]=%d\n",i,uni[i]);
    }

        }
        else{
           uni[n]=a[i];
           n++;
        }
    }
    return 0;
}