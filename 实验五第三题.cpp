#include<iostream>
using namespace std;
class V {
private:
	double length, height, width;
public:
	void input();
	void output();
};
void V::input() {
	cin >> length >> height >> width;
}
void V::output() {
	cout << length * height * width << endl;
}
int main() {
	V v1, v2, v3;
	v1.input();
	v1.output();
	v2.input();
	v2.output();
	v3.input();
	v3.output();
}