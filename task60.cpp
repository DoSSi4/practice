#include <iostream>
#include <math.h>

using namespace std;
int main()
{ 
int n, m3, m2, m1;
cin >> n;
m3 = n % 10;
m2 = n  / 10 % 10;
m1 = n / 10 / 10 % 10;
cout<< m3<<m2<<m1 ;
return 0;
}

 


 

