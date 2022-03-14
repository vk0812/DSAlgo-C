#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<"Greatest Number is: "<<a<<endl;
        }
        else{
            cout<<"Greatest Number is: "<<c<<endl;
        }
    }
    else{
        if(b>c){
            cout<<"Greatest Number is: "<<b<<endl;
        }
        else{
            cout<<"Greatest Number is: "<<c<<endl;
        }
    }
    // OR for max of two numbers only
    cout<<"Max is: "<<max(a,b)<<endl;
}