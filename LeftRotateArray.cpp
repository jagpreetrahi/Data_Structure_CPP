#include<iostream>
using namespace std;

/* Optimal Solution  for one place rotation */
void leftRotate(int arr[] ,int size){
    int temp = arr[0];
    for(int i = 1 ; i< size; i++){
          arr[i -1] = arr[i];
    }

    arr[size -1] = temp;
}

void printArray(int arr[] ,int size){
    for(int i =0 ; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size = 7;

    leftRotate(arr , size);
    printArray(arr , size);
}
