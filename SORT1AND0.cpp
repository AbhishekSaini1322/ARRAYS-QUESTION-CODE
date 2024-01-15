#include<iostream>
using namespace std;

int  sort(int arr[],int size){
    int ones = 0;
    int zeros = 0;

    for(int i=0; i<size; i++){
        if(arr[i]==0)
        zeros++;

        if(arr[i]==1)
        ones++;
    }

        int index = 0;
    while(zeros--){
       arr[index] = 0;
       index++;
    }

    while(ones--){
        arr[index] = 1;
        index++;
    }
}

int main(){
   
    int arr[] = {0,0,0,1,1,0,1,1,0};
    int size = 9;

     sort(arr,size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
   
}