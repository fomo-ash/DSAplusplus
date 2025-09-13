#include <iostream>
using namespace std;

void pattern(int n){
    
   
        
        char ch='E';
        for(int i=0; i<n; i++){
           for(int j=0; j<=i; j++){ 
            cout<< ch;
            
            if(ch!='E'){
                ch++;

            }
            
        }
          ch=ch-i-1;
          cout<<endl;
        
    }
}

int main() {
	
	int n;
	cin>>n;
	pattern(n);

}
