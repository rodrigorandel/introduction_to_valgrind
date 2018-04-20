#include <iostream>

using namespace std;

void invalid_read(){
	int* a = new int[10];
	int b = a[10];
	delete [] a;
}

void invalid_write(){
	int* a = new int[2];
	a[1] = 1;
	a[2] = 2;
	delete [] a;
}

int unitialized_value(){

	int a;
	int b;
	int c = a+b;
	int d = c*2;
	return d;

}


void directly_lost(int **R){
	int* b = new int[5];
}

int main(void)
{
	invalid_read();
	invalid_write();
	int d = unitialized_value();
	cout << d << endl;
	return 0;
}
