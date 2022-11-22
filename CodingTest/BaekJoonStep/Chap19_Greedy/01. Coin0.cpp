//HeoJunSang's Code
#include<iostream>
using namespace std;

int main()
{
	int coinValue[11];
    int N,K ,cnt=0;
    cin >> N >> K;
    for(int i=0;i<N;i++)
    {
        cin >> coinValue[i];
    }

    for(int i=N-1;i>=0;i--)
    {
        while(K >= coinValue[i])
        {
            cnt++;
            K = K-coinValue[i];
        }
    }

    cout << cnt;
    return 0;
}