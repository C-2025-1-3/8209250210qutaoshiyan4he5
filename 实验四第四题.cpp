#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	for (int j = 0; j < size2; j++) {
		list3[j] = list2[j];
	}
	for (int i = 0; i < size1; i++) {
		list3[size2+i] = list1[i];
	}
	for (int i = 0; i < size1 + size2; i++) {
		for (int j = i + 1; j < size1 + size2; j++) {
			if (list3[i] > list3[j]) {
				int temp;
				temp = list3[i];
				list3[i] = list3[j];
				list3[j] = temp;
			}
		}
	}
	cout << "the merged list is";
	for (int i = 0; i < size1 + size2; i++) {
		cout << list3[i] << " ";
	}
}
int main() {
	int size1; int size2;
	int list1[80], list2[80], list3[160];
	cout << "Enter list1:";
	cin >> size1;
	for (int i = 0; i < size1; i++) {
		cin >> list1[i];
	}
	cout << "Enter list2:";
	cin >> size2;
	for (int j = 0; j < size2; j++) {
		cin >> list2[j];
	}
	merge(list1, size1, list2, size2, list3);
}