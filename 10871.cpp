#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    int a = 0;

    cin>>a;
    cin>>x;
    int a_array[a];

    for(int i=0; i<a; i++)
    {
        cin>>a_array[i];
    }

    for(int i=0; i<a; i++)
    {
        if(a_array[i] < x)
        {
            cout << a_array[i] <<" ";
        }
    }
}