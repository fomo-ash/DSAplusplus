#include <iostream>
using namespace std;

void left(int arr[], int n) {
   
    int first=arr[0];
 for(int i=0; i<n-1; i++){
    arr[i]=arr[i+1];
 }

 arr[n-1]=first;

    
}

int main() {
    int arr[6] = {2,3,4,5,2,6};
 
    left(arr, 6);
    
    for(int i=0; i<6; i++){
        cout<<arr[i];
    }
}
