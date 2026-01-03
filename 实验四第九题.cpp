#include <iostream>
using namespace std;
void sortArray(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				int temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main() {
	int n; 
	cout << "输入动态数组元素个数：";
	cin >> n;
	int* p = new int[n];
	cout << "输入动态数组的各个元素:";
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	sortArray(p, n);
	for (int i = 0; i < n; i++) {
		cout << p[i] << " ";
	}
	delete[]p;
}