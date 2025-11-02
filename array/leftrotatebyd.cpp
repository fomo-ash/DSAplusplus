#include <iostream>
using namespace std;

void left(int arr[], int n,  int d) {
   

    d=d%n;

    int temp[d];
    for(int i=0;i<d; i++){
        temp[i]=arr[i];
    }
 
    for(int i=d; i<n; i++ ){
        arr[i-d]=arr[i];
    }

    for(int i=n-d; i<n; i++){
        arr[i]=temp[i-(n-d)];
    }


    
}

int main() {
    int arr[6] = {2,3,4,5,2,6};
    int d=3;
 
    left(arr, 6, d);
    
    for(int i=0; i<6; i++){
        cout<<arr[i];
    }
}
