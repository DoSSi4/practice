#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {	
	double x,y;
	cin >> x;
	y = (abs(x - 5) - sin(x)) / 3 + sqrt(x * x + 2014) * cos(2 * x) - 3;
	cout << y;
	return 0;
}
