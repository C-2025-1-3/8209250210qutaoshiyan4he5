#include<iostream>
using namespace std;
class Time {
private:
	int hour, minute, sec;
public:
	void input() {
		cin >> hour >> minute >> sec;
	}
	void output() {
		cout << hour << ":" << minute << ":" << sec;
	}
};
int main() {
	Time t1;
	t1.input();
	t1.output();
	return 0;
}