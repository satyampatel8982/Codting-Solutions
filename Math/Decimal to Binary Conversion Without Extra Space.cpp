/******************************************************************************
    
    Write a program to convert Decimal to binary without using extra space 

*******************************************************************************/
#include <iostream>

using namespace std;

void decToBinary(long int num){
    int rem, place = 1;
    long long int bnum = 0;
    while(num != 0 ){
        rem = num % 2; // getting reminder .. 
        num /= 2;       // extrating last digit here .
        bnum = bnum + (rem * place) ;
        // cout<<bnum<<" + "<<rem<<" * " << place<<" = "<<bnum<<endl;
        place *= 10;
    }
    cout<<"Binary : "<<bnum;
}


int main()
{
    // cout<<"Hello World";
    
    long long int N = 1015;
    
    decToBinary(N);
    
    return 0;
}
