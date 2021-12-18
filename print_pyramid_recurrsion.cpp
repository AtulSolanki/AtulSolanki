#include <bits/stdc++.h>
using namespace std;
void print(int arr[],int n){
    for (int i=0;i<n;i++){
        if (i==n-1){
            cout << arr[i];
        }
        else{
            cout << arr[i] << ", ";
        }
    }
    cout << endl;
}
void fun(int arr[],int n){
    if (n<1){
        return;
    }
    int temp[n-1];
    for (int i=0;i<n-1;i++){
        temp[i]=arr[i]+arr[i+1];
    }
    fun(temp,n-1);
    print(arr,n);
    
}
int main (){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    fun(arr,n);
    
}

