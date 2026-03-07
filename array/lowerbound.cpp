#include<iostream>
using namespace std;

int main(){

    int arr[5] = {1, 3, 3, 5, 7};
    int key = 2;

    
        int low=0, high=4, ans=5;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]>=key){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }

        }    

    cout<<ans<<endl;

}