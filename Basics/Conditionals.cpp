#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;

    if(a%2==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }

    // Another way using ternary operator
    // condition ? X : Y 
    int c = a>5?a*2:a*3;
    cout<<c<<endl;
}