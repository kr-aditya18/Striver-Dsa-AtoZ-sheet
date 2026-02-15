#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int n){
    for(int i = n-1; i>=0; i--){
        for(int j = 0; j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void optimisedBubbleSort(int arr[],int n){
    for(int i = 0; i<=n-1; i++){
        int didswap = 1;
        for(int j = 0; j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                didswap = 0;
            }
        }
        if (didswap == 1) break;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++) cin>>arr[i];
    bubbleSort(arr,n);
    optimisedBubbleSort(arr,n);
    for(int i = 0; i<n; i++) cout<<arr[i]<<" ";
    return 0;
}