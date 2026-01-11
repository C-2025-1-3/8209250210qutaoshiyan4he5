#include<iostream>
using namespace std;
class student {
private:
	int name;
	double score;
public:
	void set(int b, double a);
	int get_name();
	double get_score();

};
void student::set(int b, double a) {
	name = b;
	score = a;
}
int student::get_name() {
	return name;
}
double student::get_score() {
	return score;
}
void max(student* p, int n) {
	int max_score = p->get_score();
	int max_name = p->get_name();
	for (int i = 1; i < n; i++) {
		if ((p + i)->get_score() > max_score) {
			max_score = (p + i)->get_score();
			max_name = (p + i)->get_name();
		}
	}
	cout << max_name;
}
int main() {
	student stu[5];
	stu[0].set(250210, 100);
	stu[1].set(250211, 90);
	stu[2].set(250212, 91);
	stu[3].set(250213, 93);
	stu[4].set(250214, 91.5);
	max(stu, 5);

}