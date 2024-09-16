#include<iostream>
#include<vector>
using namespace std;

/* Brute Force */
vector <int> Intersection(vector <int> a , vector <int> b){

    int n1 = a.size();
    int n2 = b.size();

    vector <int> ans;
    int visitorArray[n2] = {0};
    for(int i = 0; i <n1; i++){
        for(int j =0; j<n2; j++){
           if(a[i] == b[j] && visitorArray[j] == 0 ){
               ans.push_back(a[i]);
               visitorArray[j] = 1;
               break;
           }
           if(b[j] > a[i]) break;
        }
    }
    return ans;
}
/* Brute Force*/

/* Optimal Solution  Two Pointer*/

vector <int> Intersection(vector <int> a , vector <int> b){

    int n1 = a.size();
    int n2 = b.size();

    int i = 0;
    int j = 0;

    vector <int> ans;
    while(i < n1 && j < n2){
        
        if(a[i] < b[j]){
            i++;
        }
        else if(a[i] > b[j]){
            j++;
        }

        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;

}

int main(){

    vector <int> a = {1,2,3,4,5,6};
    vector <int> b = {1,2,3,4,5,6, 7,8};

    vector <int> result = Intersection(a,b);

    for(int i =0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}