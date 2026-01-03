#include <iostream>
using namespace std;
bool is_prime(int n) {
	if (n <= 1) {
		return false;
	}
	else {
		for (int i = 2; i * i <= n; i++) {
			if (n % i == 0) {
				return false;
			}
		}
		return true;
	}
}
int main() {
	int num = 2;
	int i = 0;
	while (i <= 200)
	{
		if (is_prime(num)) {
			cout << num << " ";
			i++;
			if (i % 10 == 0) {
				cout << endl;
			}
		}
		num++;
	}
}