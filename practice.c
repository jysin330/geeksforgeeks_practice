# include<stdio.h>

int main(){
    int n=13;
    int arr[13][13];
    int k=0;
    for(int i=0;i<13;i++){
       
 for(int j=0;j<13;j++){
         if( j%2==0){
         arr[i][j]=(n/2)+1;
        if(i%2==0){
         arr[i][j]=(n/2)+1;
         }
        }
        else{
        
          
          
         arr[i][j]=(n/2);
          
        
       
        }
        
        }
    }
    
    // for(int i=k;i<n;i++){
    //     for(int j=0;j<n;j++){
        
        //    if(i==0 ||i==12 || j==0 || j==12){
        //  arr[i][j]=7;
         
        // }
        //  else  if(i==1 ||i==11 || j==1 || j==11){
        //  arr[i][j]=6;
         
        // }
        //   else if(i==2 ||i==10 || j==2 || j==10){
        //  arr[i][j]=5;
         
        // }
        //   else if(i==3 ||i==9 || j==3 || j==9){
        //  arr[i][j]=4;
         
        // }
        // else if(i==4 ||i==8 || j==4 || j==8){
        //  arr[i][j]=3;
        
        // }
        // else if(i==5 ||i==7 || j==5 || j==7){
        //  arr[i][j]=2;
        
        // }
        // else if(i==6 ||i==6 || j==6 || j==6){
        //  arr[i][j]=1;
        
        // }
       
       
    // }
    // }
    for(int i=0;i<13;i++){
        for(int j=0;j<13;j++){
       printf("%d ",arr[i][j]);
    }
       printf("\n");

    }
    return 0;
}