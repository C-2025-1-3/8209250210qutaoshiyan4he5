#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int parseHex(const char* const hexString) {
	int result = 0;
	int len = strlen(hexString);
	for (int i = 0; i < len; i++) {
		char c = toupper(hexString[i]);
		int val;
		if (c >= '0' && c <= '9') {
			val = c - '0';
		}
		else if (c >= 'A' && c <= 'F') {
			val = 10 + (c - 'A');
		}
		else {
			cout << "输入非法" << endl;
			return -1;
		}
		result = result * 16 + val;
	}
	return result;
}
int main() {
	char a[100];
	cout << "请输入一个十六进制的数: ";
	cin >> a;
	cout << parseHex(a);

}