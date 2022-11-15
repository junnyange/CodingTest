//HeoJunSang's Code
#include<iostream>
using namespace std;

int dec(int n)
{
    int temp = n;
    int sum = 0;
    while(n>0)
    {
        sum += n%10;
        n/=10;
    }
    return temp+sum;
}

int main()
{
	int N;
    int temp=0;
    bool found = false;
    cin >> N;
    for(int i=1;i<=N;i++)
    {
        if(dec(i) == N)
        {
            temp = i;
            break;
        }
    }
    cout << temp;

    return 0;
}