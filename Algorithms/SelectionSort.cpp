#include<iostream>
using namespace std;

int main(){
    int a[] = {31,145,62,2,38,24};
    int len = sizeof(a)/sizeof(a[0]);
    int temp;

    for(int i=0;i<len-1;i++){
        for(int j=i+1;j<len;j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout<<"Sorted Array"<<endl;
    for(int i=0;i<len;i++){
        cout<<a[i]<<" ";
    }
}