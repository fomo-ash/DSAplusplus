#include<iostream>
using namespace std;

int main(){
    int arr[5]={3,2,6,4,5};
    int largest= arr[0];

    int target=6;

    for(int i=0; i<5; i++){
        if(arr[i]==target){
          return i;
        }
    }

    return -1;
}
