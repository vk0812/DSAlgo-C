#include<iostream>
using namespace std;

int fact(int n){
    int f = 1;
    for(int i=1;i<=n;i++){
        f = f * i;
    }
    return f;
}

int main(){
   int a,b;
   cin>>a>>b;
   int afact = fact(a);
   int bfact = fact(b);
   cout<<"The factorial of "<<a<<" is: "<<afact<<endl;
   cout<<"The factorial of "<<b<<" is: "<<bfact<<endl; 
}