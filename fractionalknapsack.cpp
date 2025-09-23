#include<iostream>
using namespace std;
#include <vector>
#include <algorithm>

struct item{
    int value, weight;
};

bool cmp( item a, item b){
    double r1= (double)a.value/a.weight;
    double r2= (double)b.value/b.weight;
    return r1>r2;
}

double fractionalknapsack(int W, vector<item> &items){
  
    sort(items.begin(), items.end(), cmp);

    int totalValue= 0.0;

    for(int i=0; i<items.size(); i++){
        if(items[i].weight<=W){
            totalValue+=items[i].value;
            W=W-items[i].weight;
        }
        else{
            double fraction= (double)W/items[i].weight;
            totalValue+=items[i].value*fraction;
            break;
        }

    }

    return totalValue;
    


}

int main(){
  
    int W=50;
    vector<item> items ={{60,10},{100,20},{120,30}};

    cout<<"maximum value is"<<fractionalknapsack(W, items)<< endl;

}