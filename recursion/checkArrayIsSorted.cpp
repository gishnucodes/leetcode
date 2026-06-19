/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>


bool isArrOrdered(int A[],int n){
    
    if(n==0){
        return true;
    }
    else if(A[n]>=A[n-1]){
        
        return isArrOrdered(A,n-1);;
    }
    else{
        return false;
    }
}

int main()
{
    int A[5] = {0,1,3,3,24};
    if(isArrOrdered(A,5)){
        std::cout<<"Success";
    }else{
        std::cout<<"Failed";
    }
    return 0;
}