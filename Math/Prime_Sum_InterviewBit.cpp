/******************************************************************************

Given an even number ( greater than 2 ), return two prime numbers whose sum will be equal to given number.

NOTE: A solution will always exist. read Goldbach’s conjecture

Example:

    Input : 4
    Output: 2 + 2 = 4
    
    Input : 10
    Output : 3 + 7 = 10
    
    Input : 35 
    output : 13 + 21
    
    Input : 33
    output : 2 + 31
    
    If there are more than one solutions possible, return the lexicographically smaller solution.
    
    If [a, b] is one solution with a <= b,
    and [c,d] is another solution with c <= d, then
    
    [a, b] < [c, d] 
    
    If a < c OR a==c AND b < d. 


    Solution given by ~ Vihaan Patel
        
        without using extra space
        
Solution :
    even + even = even 2 + 2 = 4
    odd + even = odd   1 + 2 = 3 
    odd + odd = even   1 + 1 = 2

(Use C++ Compiler) Code Writen in C++ Programming language.
*******************************************************************************/
// Header file 
#include<iostream>

using namespace std;

int isPrime(int num){
    // logic of prime Number
    for(int i = 2; i * i <= num; i++ ){
        if (num % i == 0)   
            return 0;
    }
    return 1;
}

void solve(int N){
    // solution of a problem
     int flag;
    //Condition to be remeber a number should > 4 smallest even prime is 2 
    if( N < 4){
        cout<<"-1"<<endl;
        return;
    }
    
    if( N % 2 != 0 ){
        if ( isPrime( N - 2 ) ){
            cout<<2<<" "<<N-2;
            return;
        }
    }
    
    for(int i = 3; i <= N/2 && (N - i) != 2 ; i += 2 ){
        if ( isPrime(i) && isPrime(N - i) ){
            if( i < N - i ){     // only printing logic Nothing about to worry
                cout<<i<<" "<<N-i;
            }
            else{
                cout<<N - i<<" "<<i; // for making lexicographically order print small then large value
            }
            return;
        }
    }
    cout<<-1;
}
int main()
{
    int Num; 
    
    cin>>Num;
       
    solve(Num);

    return 0;
}














