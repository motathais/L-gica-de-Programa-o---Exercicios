#include <iostream>
#include <cstdlib>

// Faça um programa que apresente a série de Fibonacci até o décimo quinto termo. A 
// série é formada pela seqüência: 1,1,2,3,5,8,13,21,34,....,etc.

using namespace std;

int main(){
	
	int fib[15], i;
		
	fib[0] = 1;
	fib[1] = 1;
		
	for (i = 0; i < 15; i ++){
		
	if(i > 1){
		
		fib[i] = fib[i-1] + fib[i-2];
		
		}	
	}
	
	for(i = 0; i <15; i++){
		
		cout << fib[i] <<endl;	
		
	}
	
	
	
	
	system("PAUSE");
	return 0;
}
