#include <iostream>
using namespace std;

void left(int arr[], int n) {
   
    int last=arr[n-1];
    
 for(int i=n-2; i>=0; i--){
    arr[i+1]=arr[i];
 }

  arr[0]=last;

    
}

int main() {
    int arr[6] = {2,3,4,5,2,6};
 
    left(arr, 6);
    
    for(int i=0; i<6; i++){
        cout<<arr[i];
    }
}
