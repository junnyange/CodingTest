//HeoJunSang's Code
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string S1, S2;
    int x1 = 0, x2 = 0;
    int c;

    cin >> S1;
    cin >> S2;

    c = 100;
    for(int i=2;i>=0;i--)
    {
        x1 = x1 + int(S1[i]-48) * c;
        x2 = x2 + int(S2[i]-48) * c;
        c = c / 10; 
    }
    
    if(x1 > x2) cout << x1;
    else cout << x2;
    return 0;
}

