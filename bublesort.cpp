#include <iostream>
using namespace std;

void bubblesort (int arr[], int n){
  
}

int main() {
	int n;
    cin>> n;

    int arr[n];

    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    bubblesort(arr,n);
    
     for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}

// if u are aceesing an element that is not present,it will throw a runtime error.