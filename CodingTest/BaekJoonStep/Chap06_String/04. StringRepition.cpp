//HeoJunSang's Code
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string S;
    int N,X;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        cin >> X;
        cin >> S;
        for(int j=0;j<S.length();j++)
        {
            for(int k=0;k<X;k++)
            cout << S[j];
        }
        cout << "\n";
    }
    return 0;
}
