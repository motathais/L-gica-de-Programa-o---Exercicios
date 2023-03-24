#include<iostream>
#include<cstdlib>
#define PI 3.1415

using namespace std;

/*
4ª) Criar um programa que receba um grau e o converta para radianos através de uma função.
Fórmula: radiano = grau * pi / 180 
*/

float rad(float x);

int main(){
	float grau;
	
	cout <<"Informe o grau:";
	cin >> grau;
	
	cout <<"O grau em radianos e " << rad(grau);
	
}

float rad(float x){
	
	return(x * PI /180);
}


