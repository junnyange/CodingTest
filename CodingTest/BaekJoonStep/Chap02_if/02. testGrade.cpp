//HeoJunSang's Code
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int T;
    cin >> T;
    if(T>=90) cout << "A";
    else if(T>=80) cout << "B";
    else if(T>=70) cout << "C";
    else if(T>=60) cout << "D";
    else cout << "F";
    return 0;
}