
#include <iostream>
#include <string>
using namespace std;
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	if (a + b == c || a + c == b || b + c == a) {
		cout << "yes";

	}
	else {
		cout << "no";
	}
	return 0;
}
