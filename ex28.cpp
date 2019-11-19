#include <iostream>
using namespace std;
int main(){
	double a, b;
	cin>>a>>b;
	double x= a, y = a;
	for(int i = 0; i<5; i++){
		x = x + a *(b/100);
		y = y * (b/100+1);
	}
	cout<<x<<" "<<y;
}
