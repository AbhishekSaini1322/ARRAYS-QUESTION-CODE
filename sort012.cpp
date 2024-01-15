#include<iostream>
using namespace std;

void sorts(int arr[],int n){

    int left = 0;
    int right = n-1;
    int index = 0;

    while(index <= right){

        if(arr[index] == 0){
            swap(arr[index],arr[left]);
            index++;
            left++;
        }
        else if(arr[index] == 2){
            swap(arr[index],arr[right]);
            right--;
        }
        else{
            index++;
        }
    }
}

int main(){
    int arr[] = {-2,2,1,0,0,2};
    int n = 6;

    sorts(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}