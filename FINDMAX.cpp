#include<iostream>
#include<limits.h>
using namespace std;

int findmax(int arr[],int size){

    int maxAns = INT_MIN;

    for(int i=0; i<size; i++){
        if(arr[i] > maxAns){
            maxAns = arr[i];
        }
    }

    return maxAns;
}

int main(){

    int arr[] = {1,2,4,6,-8,5,3,-4};
    int size = 8;

   int Maximum =  findmax(arr,size);

   cout<<Maximum<<endl;

    return 0;
}