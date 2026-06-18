/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int print(int n){
    int temp=0;
    
    if (n==0){
        return 0;
    }
    else{
        temp = print(n-1);
        
        std::cout<<temp+1<<" ";
        return temp;
    }
}

int main()
{
    print(2);
    return 0;
}