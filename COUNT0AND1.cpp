#include<iostream>
using namespace std;

void Countzeroandone(int arr[],int size){

    int Onescount = 0;
    int Zeroscount = 0;

    for(int i=0; i<size;i++){
        if(arr[i] == 1){
            Onescount++;
        }
        else{
            Zeroscount++;
        }
    }

    cout<<"Onescount: "<<Onescount<<endl;
    cout<<"Zeroscount: "<<Zeroscount<<endl;
}

int main(){

    int arr[] = {0,0,0,1,1,0,1,1,0};
    int size = 9;

    Countzeroandone(arr,size);
}