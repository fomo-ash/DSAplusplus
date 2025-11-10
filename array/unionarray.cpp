#include <bits/stdc++.h>
using namespace std;


vector<int> findunion(int arr1[],int arr2[], int n1, int n2){


    set<int> s;
    vector <int> result;
    for(int i=0; i<n1; i++){
        s.insert(arr1[i]);
    }
    for(int j=0; j<n2; j++){
        s.insert(arr2[j]);
    }

    for(auto & it: s) result.push_back(it);

    return result;
}
    


int main(){

    int arr1[5]={1,2,3,4,5};
    int arr2[5]={3,4,2,6,6};
    
    vector<int> result= findunion(arr1,arr2, 5, 5);

    for(auto & val: result){
        cout<<val<<" ";
    }

    return 0;
}

   