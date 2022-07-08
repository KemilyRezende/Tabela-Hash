#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#ifndef __HASH__HPP
#define __HASH__HPP

using namespace std;

class Hash{
	private:
		int col1;
		int col2;
	public:
		int hashingFunction(int item);
		void openedAdress(int *vet);
		//void separateChaining(int *vet);
		void insertOA(int item, int *hashOA);
		//void insertSC(int item, vector *hashSC);
};

#endif

