#include<iostream>
using namespace std;

void Extremprint(int arr[],int size){

    int left = 0;
    int right = size-1;

    while(left <= right){
        
    if(left == right)
    {
        cout<<arr[left]<<" ";
    }
    else 
    {
        cout<<arr[left]<<" "<<arr[right]<<" ";
        
    }
        left++;
        right--;
       
    }
}

int main(){

    int arr[6] = {10,20,30,40,50,60};
    int size = 6;

    Extremprint(arr,size);

    return 0;
}