#include<iostream>
using namespace std;
void brute(int arr[]){
 
    int temp[10];

    int j=0;
    for(int i =0; i<10; i++){
        if(arr[i]!=0){
            temp[j]=arr[i];
            j++;
        }
    }
    for(int i=j; i<10; i++){
        temp[i]=0;

    }

    for(int i=0; i<10; i++){
        arr[i]=temp[i];

    }
}

void optimal(int arr[]){

    int j=-1;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]==0){
            j=i;
            break;
        }
    }

        if (j==-1) return;

        for (int i=j+1; i<10; i++){
            if(arr[i]!=0){
                swap(arr[i],arr[j]);
                j++;
            }
        }
}
    


int main(){

    int arr[10]={0,1,2,0,3,0,4,5,9,0};

    // brute(arr);
    optimal(arr);

    for(int i=0; i<10; i++){
        cout<<arr[i];
    }
}