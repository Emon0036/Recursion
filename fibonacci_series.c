#include<stdio.h>

void fiboseries(int n1 , int n2 ){
  static int length=1; // here I have to use static because I want to change the value of length

   int fibo;
    if(length == 10){
        return;        // when function is void then it doesn't return any value
    }
    else{
     fibo = (n1+n2);
  

    n1=n2;
    n2=fibo;

    printf("%d " , fibo);
    length++;
    fiboseries(n1 , n2);

    }

}

int main(){

    int n1=0 , n2=1 , j=10;

    printf("Fibonacci Series:");

    printf("1 ");

    fiboseries(n1,n2);

    return 0;
    
}
