#include<iostream>
using namespace std;

int linearSearch(int arr[], int size , int k){
 
    for(int i = 0; i<size; i++){
        if(arr[i] == k){
            return i;
            break;
        }
    }

    
        return -1; // key element not exists 
    
}


int main(){

    int arr[] = {1,2,4,5,6,7,8};
    int size = 7;

   int result = linearSearch(arr , size , 10);
   cout<<"The element is present at index "<<result;
}