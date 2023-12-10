#include <iostream>
using namespace std;

int main()
{
    string x= "Hello there \"mate\".";
    string y= "Siuuuuu! \n";
    y[0] = 'N';
    string z= x + y;

    string a= "John ";
    string b= "Dalton \n";
    string c= a.append(b);
     cout << z + c;
    cout << x.length();
    return 0;
}
