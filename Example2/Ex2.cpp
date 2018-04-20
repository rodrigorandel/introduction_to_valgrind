#include <iostream>
#include <cstdlib>
#include "SomeClass.h"

int main(void){
	int* a = new int[10];

	for (int i = 0; i < 10; i++) {
		a[i] = i;
	}

	someFunction();

	free(a);
	return 0;
}
