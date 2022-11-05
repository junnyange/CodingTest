//HeoJunSang's Code
#include<iostream>
using namespace std;

bool Hansu(int n);

int main()
{
	int N, count = 0;
    cin >> N;
    for(int i=1;i<=N;i++)
    {
        if(Hansu(i))
            count++;
    }
    cout << count;
    return 0;
}

bool Hansu(int n)
{
    if(n>=1 && n<=99)
        return true;
    else
    {
        int last = n%10;
        n = n/10;
        if(n/10 - n%10  == n%10 - last)
            return true;
        else
            return false;
    }
}

/*
1~9
10 ~ 99
true

100~999
true or false

5 3 1
1 3 5
*/