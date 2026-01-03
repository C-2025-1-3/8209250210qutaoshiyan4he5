#include <iostream>
#include <cstring>
using namespace std;
int index(const char* s1, const char* s2)
{
	int num1 = strlen(s1);
	int num2 = strlen(s2);
	for (int i = 0; i <= num2 - num1; i++) {
		if (s1[0] == s2[i]) {
			for (int j = 0; j < num1; j++) {
				if (s1[j] != s2[i + j]) {
					break;
				}
				else {
					return i;
				}
			}
		}
	}
	return -1;
}
int main() {
	char s1[100], s2[100];
	cout << "ÇëÊäÈë×Ö·û´®s1: ";
	cin >> s1;
	cout << "ÇëÊäÈë×Ö·û´®s2: ";
	cin >> s2;
	cout << index(s1, s2) << endl;
}