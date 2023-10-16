#include <iostream>
#include <cmath>

using namespace std;

double h(const double x, const double y);

int main()
{
	double s, t;
	cout << "s="; cin >> s;
	cout << "t="; cin >> t;

	double g = h(1, s + t) + h(s, s - t) - h(t, sqrt(s * s + t * t));

	cout << "g=" << g << endl;

	return 0;
}


double h(const double x, const double y)
{
	return (x * x + y * y) / (1 + x * x + x * x * y * y);
}