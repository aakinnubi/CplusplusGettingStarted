#include <iostream>
using namespace std;

int Sum(int one, int two, int three) {
	return one + two + three;
}
float Average(int one, int two, int three) {
	return Sum(one, two, three) / 3;
}
int main() {
	cout << "This program is used for finding the sum and average of three numbers" << endl;
	int one;
	int two;
	int three;
	cout << "Enter your first number" << endl;
	cin >> one;
	cout << "Enter your second number" << endl;
	cin >> two;
	cout << "Enter your third number" << endl;
	cin >> three;
	
	cout << "The sum of your numbers is : " << Sum(one, two, three) << endl;

	cout << "The average of your numbers is : " << Average(one, two, three) << endl;
}
