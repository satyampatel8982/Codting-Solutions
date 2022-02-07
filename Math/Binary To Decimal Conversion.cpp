/******************************************************************************

    Write a program to Convert Binary to Decimal number

*******************************************************************************/
#include <iostream>
#include <math.h>

using namespace std;

void convertDec(long int bNum){
    
    long int dNum = 0;
    int i = 0 ;
    int rem; 
    while(bNum != 0 ){
        
        rem = bNum % 10;
        if(rem)
            dNum = dNum + pow(2,i);
        i++;
        bNum /= 10;
        
    }
    cout<<"Decimal Number : "<<dNum;
}


int main()
{
    long int bNum;
    
    cout<<"Enter Binary Number : "; cin>>bNum;
    
    convertDec(bNum);

    return 0;
}

