#include<iostream>
#include<vector>
using namespace std;

int largestElement(vector <int> &arr , int n){
    int largest = arr[0];
    for(int  i= 1; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}


int main(){
    int size = 6;
    int arr[] = {2,5,8,3,4 , 10};

    vector<int> vec(arr , arr+ size);
   int result =  largestElement(vec , size);
   cout<<"The largest Element is "<<result;
}