#include<stdio.h>

int  nnumber(int n){

   
 
   if(n <= 50){
    printf("%d " , n);
    nnumber(n+1);
   }

    
}

int main(){
    int n=1;

     printf("N natural number upto 50\n");

     nnumber(n);
   
    return 0;
}
