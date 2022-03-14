#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[] = {2,9,14,37,88,96,100,105};
    bool b = false;
    int len = sizeof(a)/sizeof(a[0]);
    int s = 0,e = len-1;
    int mid = 0;

    while(s<=e){
        mid = (s + e)/2;
        if(a[mid]==n){
            b = true;
            break;
        }
        else if (a[mid]>n){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }

    if(b){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Not Present"<<endl;
    }
}