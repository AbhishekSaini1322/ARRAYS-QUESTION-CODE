#include<iostream>
using namespace std;

int sort(int arr[],int n){
    int j = 0;
    for(int i=0; i<n; i++){
        if(arr[i] < 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}

void print(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {-23,-7,12,-10,-11,40,60};
    int n = 7;

    sort(arr,n);
    print(arr,n);
}