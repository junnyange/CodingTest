//HeoJunSang's Code
#include<iostream>
using namespace std;

bool primeNumber(int n);

int main()
{
	int M,N,sum=0,cnt=0,min;
    bool primeIs = false;
    cin >> M >> N;
    for(int i=M;i<=N;i++)
    {
        if(primeNumber(i))
        {
            sum += i;
            primeIs = true;
            cnt++;
        }
        else primeIs = false;
        if(cnt == 1 && primeIs==true)
            min = i;
    }
    if(cnt == 0) cout << -1;
    else cout << sum << "\n" << min;
    return 0;
}

//PrimeNumber 1과 자기자신으로만 나누어지는 수
bool primeNumber(int n)
{
    if(n==1)
        return false;
    for(int i=2;i<n;i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}