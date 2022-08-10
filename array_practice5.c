# include<stdio.h>
int unionarr(int arr[],int arr1[],int uni[]){
    int i=0;
    for(;i<6;i++){
    
              uni[i]=arr[i];
        
    }
    // printf("%d\n",i);
        for(int j=0;j<3;j++){
   
       for(int k=0;k<6;){
            if(arr[j]!=arr[k]){
                uni[i]=arr[j];
                k++;
            }
            else{
               k=6;
            }
       
    }

}}
int interarr(){
      
}
int main(){
    int arr[]={1, 2,5,8,7,9};
    int arr1[]={2,4,3},temp,temp1;
    int uni[10],inter[10];
   for(int i=0;i<6;i++){
        for(int j=0;j<(6-i);j++){
         if(arr[i]>arr[i+j]){
             temp=arr[i];
              arr[i]=arr[i+j];
              arr[i+j]=temp;
         }
         if(i<3&& j<(3-i)){
         if(arr1[i]>arr1[i+j]){
             temp1=arr1[i];
              arr1[i]=arr1[i+j];
              arr1[i+j]=temp1;
         }}
   }
   }
   for(int i=0;i<6;i++){
         printf("arr[%d]=%d\n",i,arr[i]);
   }
   for(int i=0;i<3;i++){
         printf("arr[%d]=%d\n",i,arr1[i]);
   }
   unionarr(arr,arr1,uni);
    for(int i=0;i<8;i++){
        printf("arr[%d]=%d\n",i,uni[i]);
    }
    return 0;
}