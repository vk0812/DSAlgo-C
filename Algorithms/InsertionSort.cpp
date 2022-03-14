#include<iostream>
using namespace std;

int main(){
    int a[] = {31,145,62,2,38,24};
    int len = sizeof(a)/sizeof(a[0]);
    int temp;

    for(int i=1;i<len;i++){
        int current = a[i];
        int j = i-1;
        while(a[j]>current && j>=0){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = current;
    }

    cout<<"Sorted Array"<<endl;
    for(int i=0;i<len;i++){
        cout<<a[i]<<" ";
    }
}