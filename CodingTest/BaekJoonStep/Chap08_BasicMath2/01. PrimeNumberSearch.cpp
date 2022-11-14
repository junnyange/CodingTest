//HeoJunSang's Code
#include<iostream>
using namespace std;

bool primeNumber(int n);

int main()
{
	int N ,X , count =0;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        cin >> X;
        if(primeNumber(X))
            count++; 
    }
    cout << count;
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