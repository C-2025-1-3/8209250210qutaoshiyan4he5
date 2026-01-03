#include <iostream>
using namespace std;
void bubbleSort(double list[], int listsize) {
	bool changged;
	do {
		changged = false;
		for (int j = 0; j < listsize - 1; j++) {
			if (list[j] > list[j + 1]) {
				double temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				changged = true;
			}
		}
	} while (changged);
}
int main() {
	double a[10];
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	bubbleSort(a, 10);
	for (int i = 0; i < 10; i++) {
		cout << a[i] << ' \t ';
	}
}