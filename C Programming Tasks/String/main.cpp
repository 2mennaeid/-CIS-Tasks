#include <iostream>
#include <sstream>
#include<string>
using namespace std;
string addStrings(string num1, string num2) {
        int n1;
        int n2;
        int res;
        stringstream s1(num1);
        stringstream s2(num2);
        stringstream c;
        s1>>n1;
        s2>>n2;
        res= n1+n2;
        c<<res;
        return c.str();
    }
int main()
{
    cout<<addStrings("11","200");
    return 0;
}
