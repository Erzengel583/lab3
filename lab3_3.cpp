#include<iostream>
using namespace std;

int main(){
    
    double sum = 0, x=2;
    while(x<70){
        sum += 1/x;
        x = x+1;
   }
cout<< sum;
    return 0;
    }