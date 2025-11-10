#include <iostream>
#include<algorithm>
using namespace std;

void right(int arr[], int n, int d) {
   
    reverse(arr,arr+n);
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);


    
}

int main() {
    int arr[6] = {2,3,4,5,2,6};
 
    int d=3;
    right(arr, 6, d);
    
    for(int i=0; i<6; i++){
        cout<<arr[i];
    }
}
