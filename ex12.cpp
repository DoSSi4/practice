#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double x,y;
	cin>>x;
	y=pow(M_E,(x-2)) + abs(sin(x)) - pow(x,4)*cos(1/x);
	cout<<y;
	return 0;
}
