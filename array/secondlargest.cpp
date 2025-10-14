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

int secondSmallest(int arr[]){

 
    int smallest=arr[0];
    int secondsmallest=INT_MAX;
    for( int i=0; i<6; i++){
    if(arr[i]<smallest){
        secondsmallest=smallest;
        smallest=arr[i];
    }

    else if(smallest>arr[i] && arr[i]<secondsmallest){
        secondsmallest=arr[i];
    }

    
}
 
return secondsmallest;
}
int main(){
   
   
    int arr[6]={5,3,8,7,6,1};

    

    cout<< "Second Largest is"<<secondLargest(arr);
     cout<< "Second Smallest is"<<secondSmallest(arr);
}
