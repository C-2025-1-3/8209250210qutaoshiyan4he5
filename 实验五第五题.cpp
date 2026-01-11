#include<iostream>
using namespace std;
class Point {
public:
	Point(int x0, int y0) {
		x = x0;
		y = y0;
	}
	void setPoint(int i, int j) {
		x = 60 + i;
		y = 80 + j;
	}
	void display() {
		cout << x << "," << y << endl;
	}
private:
	int x, y;
};
int main() {
	Point p(60, 80);
	p.display();
	p.setPoint(10, 20);
	p.display();
}