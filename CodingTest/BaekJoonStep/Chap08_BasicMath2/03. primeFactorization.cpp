//HeoJunSang's Code
#include<iostream>
using namespace std;

int main()
{
	int N;
    bool keep;
    cin >> N;
    if(N==1) return 0;
    for(int i=2;i<=N;i++)
    {
        while(N%i==0)
        {
            cout << i << "\n";
            N = N / i;
        }
    }
}
