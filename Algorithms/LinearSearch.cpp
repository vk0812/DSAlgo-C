#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[] = {1,2,3,4,5,6};
    int len = sizeof(a)/sizeof(a[0]);
    bool b = false;

    for(int i=0;i<len;i++){
        if(n==a[i]){
            b = true;
            break;
        }
    }

    if(b){
        cout<<"Present";
    }
    else{
        cout<<"Not Present";
    }
}