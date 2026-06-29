#include <stdio.h>
#include <iostream>
using namespace std;

void run(int a){

    int val = a;
    while(val>=1){

        if (val%2==0){
            cout<<val<<" ";
            val=val/2;
        }
        else if(val%2!=0 && val>1){
            cout<<val<<" ";
            val=val*3+1;
        } else {
            cout<<val<<std::endl;
            val=0;
        }
    }
}


int main(){
  run(3);
  return 0;
}