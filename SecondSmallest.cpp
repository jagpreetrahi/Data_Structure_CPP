#include<iostream>
#include<vector>
#include <climits>
using namespace std;

int secondSmallest(vector<int> &arr , int n){
    int smallest = arr[0];
    int secondSmaller = INT_MAX;  // assume the largest element 

    for(int i = 0; i<n; i++){
        if(arr[i] < smallest){
            secondSmaller = smallest;
            smallest = arr[i];
        }

        else if(arr[i] != smallest  && arr[i] < secondSmaller){
            secondSmaller = arr[i];
        }
    }

    return secondSmaller;
}

int main(){
    int arr[] = {2,5,4,8,6};
    int size = 5;

    vector<int> vec(arr , arr + size);

    int result = secondSmallest(vec , size);
    cout<<"The second smallest element is " <<result;
}