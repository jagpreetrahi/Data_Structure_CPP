#include<iostream>
#include<vector>
using namespace std;

bool checkArraySorted(vector <int> arr , int n){
    for(int i = 1 ; i<n; i++){
        if(arr[i] >= arr[i-1])
        {
            
        }

        else{
            return false;
        }

    }

    return true;
    
}

int main(){
    int arr[] = {2,3,3,4,1,4};
    int arr1[] = {2,3,3,4,5,6};

    int size = 6;

    vector <int> vec(arr , arr + size);
    vector <int> vec1(arr1 , arr1 + size);

    int result = checkArraySorted(vec , size);
    int result1 = checkArraySorted(vec1 , size);

    if(result){
        cout<<"The first array is sorted";
    }

    else if(result1){
        cout<<"The second array is sorted ";
    }
    else 
    {
        cout<<"The array is not sorted";
    }


}

