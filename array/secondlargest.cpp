#include<iostream>
using namespace std;

int secondLargest(int arr[]){
  
 
    int largest= arr[0];
    int secondlargest= INT_MIN;

    for(int i=0; i<6; i++){
        if(arr[i]>largest ){
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>secondlargest){
            secondlargest=arr[i];
        }
    }

    return secondlargest;
}

int main(){
   
   
    int arr[6]={5,3,8,7,6,1};

    

    cout<< "Second Largest is"<<secondLargest(arr);
}
