#include <iostream>
using namespace std;
int g(int m, int n, int &lcm) {
	int a = m, b = n;
	int c;
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
    lcm = m * n / a;
	return a;
}
int main() {
	int m, n;
	int lcm = 0;
	cin >> m >> n;
	cout << g(m, n, lcm) << " " << lcm << endl;
	return 0;
}