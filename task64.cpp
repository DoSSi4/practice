#include<iostream>
using namespace std;
int main(){
		int n, m1, m2, m3, m4;
		cin>>n;
		m4 = n % 10;
		m3 = n /10 %10;
		m2 = n / 10 / 10 % 10;
		m1 = n /10 / 10 /10 %10;
		if(m1==m4 && m2==m3){
			cout<<"yes";
		}
		else{
			cout<<"no";
		}
return 0;	
}
