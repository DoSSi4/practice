#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x,y;
    cin>>x>>y;
    if(x>=0 && y>=0){
        cout<<sqrt(x-sqrt(y));
    }
    else {
		cout<<"No square";
	}
return 0;
