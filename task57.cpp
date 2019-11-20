#include <iostream>
using namespace std;

int main() {
    int day,month,year;
    cin>>day>>month>>year;
    switch (month)
            {
                case 1: //january
                case 3: // march
                case 5: //may
                case 7: //july
                case 8: //august
                case 10: //october
                case 12: //december
                    if (day >= 1 && day <= 31 )
                       cout<<"Correct";
                    else
                        cout<<"incorect";
                    break;
                case 2: // febuary
                    if (day >= 1 && day <= 28 )
                        cout<<"Correct";
                    else
                        cout<<"incorect";
                    break;
                case 4: //april
                case 6: //june
                case 9: //september
                case 11: //november
                    if (day >= 1 && day <= 30 )
                        cout<<"Correct";
                    else
                       cout<<"incorect";
                    break;
                default:
                        cout<<"incorect";
                    break;
                                        
            }

    return 0;
}
