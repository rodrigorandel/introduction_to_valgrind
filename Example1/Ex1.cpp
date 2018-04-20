#include <cstdlib>

void g(void){
	malloc(4000);
}
void f(void){
	malloc(2000);
	g();
}
int main(void){
	int* a[10];

	for (int i = 0; i < 10; i++) {
		a[i] = new int[1000];
		for (int j = 0; j <= 1000; j++) {
			a[i][j] = j;
		}
	}

	f();

	g();

	for (int i = 0; i < 10; i++) {
		delete [] a[i];
	}

	return 0;
}
