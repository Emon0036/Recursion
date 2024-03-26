#include<stdio.h>

int nsum(int n){

    // base condition

    if(n == 0){
        return 0;
    }

    int sum = n + nsum(n-1);

    return sum;

}

int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d" , &n);

    int sum = nsum(n);

    printf("%d" , sum);

    return 0;


}
