#include <iostream>
#include <stdio.h>
#include <vector>
#include "Hash.hpp"

using namespace std;

int Hash::hashingFunction(int item){
	int size = 20;
	//Método da Congruência Linear
	float a = 0.6180339887;
	float key = item * a;
	key = key - (int)key;
	return (int)(size*key);
}
void Hash::insertOA(int item, int *hashOA){
	int key = hashingFunction(item);
	if (hashOA[key] == -1){
		hashOA[key] = item;
	}
	else {
		this->col1++;
		for (int i = 0; i<20; i++){
			if (hashOA[i] == -1){
				hashOA[i] = item;
				break;
			}
			
		}
	}
}
/*void Hash::insertSC(int item, vector *hashSC){
	int key = hashingFunction(item);
	if (hashSC[key].size() > 1){
		this->col2++;
	}
	hashSC[key].push_back(item);
}*/

void Hash::openedAdress(int *vet){
	this->col1 = 0;
	int hashOA[20];
	int i;
	
	for (i = 0; i < 20; i++){
		hashOA[i] = -1;
	}
	
	for (i = 0; i<20; i++){
		insertOA(vet[i], hashOA);
	}
	std::cout << "\nO número de colisões na tabela hash com Endereçamento Aberto foi: " << this->col1 << ".\n";
}
/*void Hash::separateChaining(int *vet){
	this->col2 = 0;
	int i;
	vector<int>hashSC[20];
	
	for (i = 0; i < 20; i++){
		insertSC(vet[i], hashSC);
	}
	cout << "\nO número de colisões na tabela hash com Endereçamento Aberto foi: " << this->col2 << ".\n";
}*/

