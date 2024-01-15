#include<iostream>
#include<limits.h>
using namespace std;

int findminimum(int arr[],int size){

        int minAns = INT_MAX;

        for(int i=0; i<size; i++){
            if( arr[i] < minAns){
                minAns = arr[i];
            }
        }

        return minAns;
}

int main(){

    int arr[] = {1,2,4,6,8,5,3,4};
    int size = 8;

   int Minimum =  findminimum(arr,size);

   cout<<Minimum<<endl;

    return 0;
}