#include <iostream>
using namespace std;

int main()
{
    int a = 0;

    cin >> a;

    if(a % 4 == 0)
    {
        if(a % 400 == 0)
        {
            cout <<"1"<<endl;
        }
        else if(a % 100 != 0){
            cout <<"1"<<endl;
        }
    } 
    else
    {
        cout <<"0"<<endl;
    }

    return 0;
}