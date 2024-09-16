#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*  Brute Force 

void leftRotate(int arr[] , int size , int d){

    d = d % size;

    int temp[d];
    // storing the value into temporary array for rotate
    for(int i = 0; i<d; i++){
        temp[i] = arr[i];
    }

   // moving remains element to ahead
    for(int i = d ; i<size; i++){
        
        arr[i-d] = arr[i];
    }

    for(int i = size - d ; i < size; i++){
          arr[i] = temp[i - (size - d)];
    }
}

void printArray(int arr[] , int size){

    for(int i = 0; i < size; i++){
        cout<<arr[i] << " ";
    }
}

*/



/* Brute Force Solution */


/* OPtimal Solution */


void leftRotateByK(int arr[] , int size , int k){
     k = k%size;

     reverse(arr , arr + k);
     reverse(arr + k , arr + size);
     reverse(arr , arr + size);
     
}

void reverse(int arr [] , int start , int end){

    while(start <= end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[] , int size){

    for(int i = 0; i < size; i++){
        cout<<arr[i] << " ";
    }
}

int main(){
    
    int arr[] = {1,2,3,4,5,6,7};
    // leftRotate(arr, 7 , 3);
    leftRotateByK(arr , 7, 3);
    printArray(arr , 7);
    
}



