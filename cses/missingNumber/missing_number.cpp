#include <iostream>
#include <stdio.h>


int check(int arr[],int n){
    
    std::sort(arr,arr+(n-1));

    
    for(int i=0;i<n-2;i++){

        if(arr[i+1]-arr[i]>1){
            return arr[i]+1;
        }
    }
    return -1;
}

int main(){

    int arr[5] = {2,3,1,5};
    int n = 5;

    int result = check(arr,n);

    std::cout<<result<<std::endl;
    // std::cout<<"main end"<<std::endl;
    return 0;
}