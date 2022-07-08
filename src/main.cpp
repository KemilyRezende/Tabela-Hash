#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include "Hash.hpp"
#include <locale.h>

using namespace std;

int main(){
	int i, vet[20];
	setlocale(LC_ALL, "Portuguese");
	cout << "\nC�lculo de colis�es em tabelas hash:\n";
	for (i = 0; i < 20; i++){
		vet[i]= rand();
	}
	cout << "\nValores inseridos:\n";
	for (i = 0; i < 20; i++){
		cout << vet[i] << endl;
	}
	Hash OA;
	//Hash SC;
	OA.openedAdress(vet);
	//SC.separateChaining(vet);
	return 0;
}

