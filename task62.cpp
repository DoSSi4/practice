#include <iostream>


using namespace std;
int main()
{ 
int n, m5,m4, m3, m2, m1;
cin >> n;
m5 = n % 10;
m4 = 0;
m3 = n / 10 / 10 % 10;
m2 = 0;
m1 = n / 10 / 10 / 10 /10 % 10;


cout<< m1 << m2<< m3<<m4 <<m5 ;
 
     return 0;
}
