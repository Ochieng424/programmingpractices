#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	  int sum=0;
	  
	  int n;
	  int i;
	  
	cout << "Enter A Number";
	cin >> n;
	
	    for(int i=1; i<=n; i++){
          
          sum = sum + i;
      }
      
      cout << sum; 
}
