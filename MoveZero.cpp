#include<iostream>
#include<vector>
using namespace std;

/* Brute Force */

vector <int> moveZero( vector <int> &arr, int size){
    // initiallize an array for storing non zero elements from array
    
    vector<int> temp;
    for(int i = 0; i<size; i++){
        if(arr[i] != 0){
            temp.push_back(arr[i]);
        }
    }

    int NonZeros = temp.size();

    for(int i = 0; i<NonZeros; i++){
        arr[i] = temp[i];
    }

    for(int i = NonZeros; i<size; i++){
           arr[i] = 0;
    }

    return arr;
    
}
 /* Brute Force */


  /*Optimal Solution*/
vector <int> moveZero( vector <int> &arr ,int size){

    int j = -1; // assume all element are positive
    for(int i = 0; i<size; i++){
        if(arr[i] == 0){
            j = arr[i];
            break;
        }
    }

    // all elements are non zero
    if(j == -1) return arr;

    for(int i = j+1; i<n; i++){
        if(arr[i] != 0){
            swap(arr[j] , arr[i]);
        }
    }

    return arr;

}

/* Optimal Solution */



int main(){

    vector <int> arr = {1,2,0,3,4,0,0,5,6,0};
    int size = 10;
   

   vector <int> result =  moveZero(arr , size);
   
   for(int i =0 ; i<result.size(); i++){
       cout<<result[i]<<" ";
   }

   cout<<endl;

   return 0;
}

/*optimal solution*/

