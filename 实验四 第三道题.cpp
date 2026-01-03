#include <iostream>
using namespace std;
int main() {
	bool guizi[101] = {false};
	for (int i = 1; i < 101; i++) {
		for (int j = 1; j * i <= 100; j++) {
			guizi[i * j ] = !guizi[i * j];
		}
	}
	for (int k = 1; k <= 100; k++) {
		if (guizi[k]) {
			cout << k << " ";
		}
	}
}