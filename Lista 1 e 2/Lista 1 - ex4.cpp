#include <iostream>
#include <cstdlib>

// Fa�a um programa que apresente a s�rie de Fibonacci at� o d�cimo quinto termo. A 
// s�rie � formada pela seq��ncia: 1,1,2,3,5,8,13,21,34,....,etc.

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
