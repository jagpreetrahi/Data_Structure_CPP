#include<iostream>
#include<vector>
#include<set>
using namespace std;

/* Brute Force */
vector <int> unionArray(vector <int> a , vector <int> b){

    int sizeOf_a = a.size();
    int sizeOf_b = b.size();

    set <int> st;
    for(int i = 0 ; i<sizeOf_a ; i++){
        st.insert(a[i]);
    }

    for(int i = 0 ; i<sizeOf_b ; i++){
        st.insert(b[i]);
    }

    vector <int> temp;

    for(auto it  : st){
        temp.push_back(it);
    }

    return temp ;
}

/* Brute Force */


/*Optimal Solution   ->  Two Pointer Approach*/ 

vector <int> unionArray(vector <int> a , vector <int> b){

    int sizeOf_a = a.size();
    int sizeOf_b = b.size();

    int i =0;
    int j = 0;

   vector <int> unionElement;
    while(i < sizeOf_a && j < sizeOf_b){
        if(a[i] <= b[j]){
            if(unionElement.size() == 0 || unionElement.back() != a[i]){
                unionElement.push_back(a[i]);
                i++;
            }
        }
        else{
            if(unionElement.size() == 0 || unionElement.back() != b[j]){
                unionElement.push_back(b[i]);
                j++;
            }
        }
    }

    while(i < sizeOf_a){
        if(unionElement.size() == 0 || unionElement.back() != a[i]){
            unionElement.push_back(a[i]);
            i++;
        }
    }

     while(j < sizeOf_b){
        if(unionElement.size() == 0 || unionElement.back() != b[j]){
            unionElement.push_back(b[j]);
            j++;
        }
    }

    return unionElement;


}

int main(){

   // Initialize two vectors from arrays
    vector<int> a = {1, 2, 3, 4, 5, 6};
    vector<int> b = {1, 2, 3, 4, 5, 6, 7};

    // Call the function and get the union of the arrays
    vector<int> result = unionArray(a, b);

    for(int i = 0; i<result.size(); i++){
        cout<<result[i] <<" ";
    }

    cout<<endl;

    return 0;

}

