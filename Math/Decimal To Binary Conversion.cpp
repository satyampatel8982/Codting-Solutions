/******************************************************************************

        Write a program to print binary convert of a Number

*******************************************************************************/
#include <iostream>
#include<vector> // using STL Standard Template Libary
using namespace std;

void display(vector<int> &v){
    int i ;
    for(i = 0; i < v.size(); ++i )
        cout<<v[i]<<" ";
}


void convertBinary(int Number){
    // write logic here
    int rem; 
    vector<int> v;
    vector<int> :: iterator it;
    
    while( Number != 0 ){
        rem = Number % 2; 
        it = v.begin();
        v.insert(it, rem);
        Number /= 2;
    }
    display(v);
}

int main()
{
    // cout<<"Hello World";
    int Num;
    
    cout<<"Enter the number : ";
    
    cin>>Num;
    
    
    convertBinary(Num);
    
    
    return 0;    

}
