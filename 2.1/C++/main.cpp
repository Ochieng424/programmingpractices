#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	  int sum=0;
	  int product;
	  
	  int n;
	  int i;
	  int a;
	  
	cout << "Enter A Number";
	cin >> n;
	
	cout << "Select Between" << endl
	        << "1-Product" << endl
	        << "2-Sum" << endl;
	cin >> a;
	
	if(a==1){
		for(int i=1; i<=n; i++){
          
          product = product * i;
      }
      
      cout << product;
      
	}
	else{
	
	
	    for(int i=1; i<=n; i++){
          
          sum = sum + i;
      }
      
      cout << sum;
   }    
}
