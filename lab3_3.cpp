#include<iostream>
using namespace std;

int main(){
    
    double sum = 0, x=6;
    while(x<20){
        sum += 1/x;
        x = x+1;
   }
cout<< sum;
    return 0;
    }