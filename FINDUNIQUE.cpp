#include<iostream>
using namespace std;

int Finduniqueelement(int arr[],int size){

    int ans = 0;

    for(int i=0; i<size; i++){
        ans = ans^arr[i];
    }

    return ans;
}

int main(){

    int arr[] = {2,4,6,8,10,2,12,4,6,8,10};
    int size = 11;

    int finalans = Finduniqueelement(arr,size);
    cout<<"Final answer: "<<finalans<<endl;
}