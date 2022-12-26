#include<iostream>

using namespace std;

int main()
{
	double a, b, c = 0;
	double d = 0;
	double e = 0;

	cin >> a;
	cin >> b;
	cin >> c;

	e = (b * b) - (4 * a * c);
	d = sqrt(e);
	cout << a + b * b;
	cout << (-b + d) / (2 * a) << endl;
	cout << (-b - d) / (2 * a) << endl;

	return 0;
}