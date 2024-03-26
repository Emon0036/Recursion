#include<stdio.h>

void outarray(int n , int arr[n] , int k){

   

    if(k == n){

        return;
    }

    else{

        printf("%d " , arr[k]);

        outarray(n, arr , ++k);

    }

}

int main(){
    int n , k= 0;

    scanf("%d", &n);
    int arr[n];

    for(int i=0 ; i<n ; i++){
        printf("arr[%d] = " , i);
        scanf("%d" , &arr[i]);
    }

    outarray(n, arr , k);


}
