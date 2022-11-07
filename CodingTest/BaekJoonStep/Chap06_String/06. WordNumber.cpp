//HeoJunSang's Code
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string S;
    int count = 0;
    getline(cin, S); //중요함
    for(int i=0;i<S.length()-1;i++)
    {
        if(S[i]!=' ' && S[i+1]==' ')
            count++;
    }
    if(S[S.length()-1] == ' ')
        count--;
    cout << count +1;
    return 0;
}

