#include<iostream>
using namespace std;

int main(){
    int a[] = {31,145,62,2,38,24};
    int len = sizeof(a)/sizeof(a[0]);
    int temp;

    for(int i=0;i<len;i++){
        for(int j=0;j<len-i-1;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    cout<<"Sorted Array"<<endl;
    for(int i=0;i<len;i++){
        cout<<a[i]<<" ";
    }
}