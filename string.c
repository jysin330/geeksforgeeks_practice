# include<stdio.h>

int main(){
    char c[]={'a','b','c','d','e','f','\0'};
    int temp;
    int k=0;
    while(k<4)
     {
         int i=k;
         for(;i<(6-k);i=i+2){
          temp=c[i];
          c[i]=c[i+1];
          c[i+1]=temp;         
     }
     k++;
     }
     for(int i=0;i<6;i++){
         printf("%c",c[i]);
     }
    return 0;
}