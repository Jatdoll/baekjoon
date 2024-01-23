#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;

    cin >> a;
    cin >> b;

    string s = to_string(b);

    int b_1 = (int)s[2] - '0';
    int b_2 = (int)s[1] - '0';
    int b_3 = (int)s[0] - '0';

    cout<<b_1 * a <<endl;
    cout<<b_2 * a <<endl;
    cout<<b_3 * a <<endl;
    cout<<a*b<<endl;
}