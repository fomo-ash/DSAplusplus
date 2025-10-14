#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high){
  int n1= mid-low+1;
  int n2= high-mid;
  int l[n1],h[n2];

  for(int i=0; i<n1; i++){
    l[i]=arr[low+i];

  }
  for(int j=0; j<n2;j++){
    h[j]=arr[mid+1+j]; 
  }

  int i=0, j=0, k= low;
  while(i<n1 && j<n2){
    if(l[i]<h[j]){
        arr[k++]=l[i];
        i++;
    }
    else{
        arr[k++]=h[j];
        j++;
    }
  }

    while (i < n1) arr[k++] = l[i++];
    while (j < n2) arr[k++] = h[j++];


}

void mergeSort(int low, int high, int arr[]){
    
 if(low<high){
    int mid = (low+high)/2;
    mergeSort(low, mid, arr);
    mergeSort(mid+1,high, arr);
    merge(arr,low,mid,high);
 }
 else{
    return;
 }

}

int main(){
    int arr[]={2,1,5,4,6,3,7};
    int n = sizeof(arr) / sizeof(arr[0]);


    mergeSort(0,n-1,arr);
    for(int i=0;i<n;i++){
        cout<< arr[i];
    }


}