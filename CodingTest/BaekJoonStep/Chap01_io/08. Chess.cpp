//HeoJunSang's Code
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int king,queen,ruuk,bisop,knight,poon;
    cin >> king >> queen >> ruuk >> bisop >> knight >> poon;
    cout << 1-king << " " << 1-queen << " " << 2-ruuk << " " << 2-bisop << " " << 2-knight << " " << 8-poon;
    return 0;
}