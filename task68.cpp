#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main(){
    int a,b,c,D;
    cin>>a>>b>>c;
    D=b*b-4*a*c;
    if((D)>0)
        cout<<(-b+sqrt(D))/(2*a)<<" and "<<(-b-sqrt(D))/(2*a);
    else if((D)==0)
        cout<<(-b)/(2*a);
    else
        cout<<"no sol";
}
