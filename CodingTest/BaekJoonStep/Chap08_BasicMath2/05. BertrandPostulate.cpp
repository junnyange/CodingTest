//HeoJunSang's Code
#include<iostream>
using namespace std;

bool isPrime(int n);

int main()
{
	int N;
    int cnt=0;
    while(1)
    {
        cin >> N;
        if(N==0)
            break;
        cnt = 0;
        for(int i=N+1;i<=2*N;i++)
        {
            if(isPrime(i) == true)
                ++cnt;
        }
        cout << cnt << "\n";
    }
    return 0;
}

bool isPrime(int n)
{
    if(n==1) return false;
    for(int i=2; i*i<=n; i++)
        if(n%i==0) return false;
    return true;
}