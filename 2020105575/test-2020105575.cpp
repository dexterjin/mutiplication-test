#include<iostream>

using namespace std;

int main(){
	int i, j;
	cout << "구구단:\n";
	for (i = 1; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			cout << i << "*" << j << "=" << i * j << '\t';
		}
		cout << endl;
	}

	return 0;
}

