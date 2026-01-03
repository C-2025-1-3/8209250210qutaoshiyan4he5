#include <iostream>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
	int num1 = strlen(s1), num2 = strlen(s2);
	for (int i = 0; i <= num2 - num1; i++) {
		int j = 0;
		while (j < num1 && s2[i + j] == s1[j]) {
			j++;
		}
		if (j == num1) {
			return i;
		}
	}
	return -1;
}
int main() {
	char a[100], b[100];
	cout << "Enter the first string : ";
	cin >> a;
	cout << "Enter the second string:";
	cin >> b;
	cout << "index(a,b) is " << indexOf(a, b);
	
}
