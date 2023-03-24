#include <iostream>
#include <cstdlib>

//Apresentar todos os valores numéricos inteiros ímpares situados na faixa de 0 a 20. 

using namespace std;

int main(){
	
	int i;
	
	for(i=0; i <20; i ++){
		
		if (i % 2 != 0){
			
			cout << i << endl;
			
		}
		
	}
	
	
	
	system("PAUSE");
	return 0;
}






