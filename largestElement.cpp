#include<bits/stdc++.h>
using namespace std;
void sortt(int arr[],int n){
    for(int i = 0; i<=n-1; i++){
        int mini = i;
        for(int j = i+1; j<=n-1; j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        swap(arr[i],arr[mini]);
    }
}

int largest(int arr[], int n){
    return arr[n-1];
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++) cin>>arr[i];
    sortt(arr,n);
    for(int i = 0; i<n; i++) cout<<arr[i]<<" ";
    cout<<"Largest element: "<<largest(arr,n)<<" ";
    return 0;
}