#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector <int> &arr , int n){
    int i = 0;
    for(int j = 1; j<n; j++){
        if(arr[j] != arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }

    return i+1;
}

int main(){
    int arr[] = {1,1,2,2,3,3,3,4};
    int size = 8;

    vector<int> vec(arr, arr+size);
    int result = removeDuplicates(vec , size);
    cout<<"The remove duplicates number  is "<<result;
}