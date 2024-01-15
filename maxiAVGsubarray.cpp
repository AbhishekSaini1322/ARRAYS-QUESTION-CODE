#include<iostream>
using namespace std;

int maximumAVG(int arr[], int n){
    int k = 4;

    int i = 0;
    int j = k-1;
    int sum = 0;

    for(int z=i; z<=j; z++){
        sum += arr[z];
    }
    int maxSum = sum;
    j++;

    while( j < n-1){
        sum -= arr[i++];
        sum += arr[j++];

        maxSum = max(maxSum,sum);
    }

    double maxAvg = maxSum / (double)k;
    cout<<maxAvg<<endl;
}

int main(){

    int arr[] = {1,12,-5,-6,50,3,15,16};
    int n = 8;

    maximumAVG(arr,n);
}