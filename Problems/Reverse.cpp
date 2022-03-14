#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int temp = n;
    int num=0,d;
    while(temp>0){
        d = temp%10;
        num = num*10 + d;
        temp /= 10;
    }

    cout<<num<<endl;
}