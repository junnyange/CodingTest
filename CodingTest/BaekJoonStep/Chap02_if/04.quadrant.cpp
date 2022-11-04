//HeoJunSang's Code
#include<iostream>
#include<string>
using namespace std;

int main()
{
    pair<int,int> p;
    cin >> p.first;
    cin >> p.second;
    if(p.first > 0)
    {
        if(p.second>0)
            cout << "1";
        else
            cout << "4";
    }
    else
    {
        if(p.second>0)
            cout << "2";
        else
            cout << "3";
    }
    return 0;
}