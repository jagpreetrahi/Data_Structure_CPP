#include<iostream>
#include<vector>
using namespace std;

int secondLargest(vector<int> &arr , int n){
    int largest = arr[0];  // assume 
    int secondLargest = -1 ;  // assume all element is +ve in array
    for(int  i = 0 ; i<n ; i++){
        if(arr[i] > largest && arr[i] > secondLargest){
            secondLargest = largest;
            largest = arr[i];
        }
        // else if(arr[i] > secondLargest){
           
        // }

    }
    return secondLargest;
}

int main(){
    int arr[] = {2,4,5,8,6,9,10 , 11 , 12, 12};
    int size = 10;

    vector<int> vec(arr, arr +size);
    int result = secondLargest(vec , size);
    cout<<"The second largest element is "<<result;
}