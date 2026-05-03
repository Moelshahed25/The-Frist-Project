#include<iostream>
using namespace std;


 void ReadGrade(float x[3]) {

	cout << "Enter grade 1\n";
	cin >> x[0];
	cout << "Enter grade 2\n";
	cin >> x[1];
	cout << "Enter grade 3\n";
	cin >> x[2];
}
float AvgGrade(float x[3]) {

	return (x[0] + x[1] + x[2]) / 3 ;
}

int main() {

	float x[3];
	ReadGrade(x);
	cout << "The Average of Grade is " << AvgGrade(x);

}