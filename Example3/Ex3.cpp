#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

void foo(){
	int* a = new int[10];
	for (int i = 0; i <= 10; i++) {
		a[i] = i;
	}
	delete[]a;
}

void bar(){
	vector<vector<int>> b(100);
	for(int i=10; i<100; i++){
		b[i] = vector<int>(10);
		for(int j=0; j<10; j++){
			b[i][i] = j;
		}
	}
}

int main(void){
	cout << "starting" << endl;
	foo();
	bar();
	return 0;
}
