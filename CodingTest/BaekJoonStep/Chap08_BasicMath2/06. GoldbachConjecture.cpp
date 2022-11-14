//HeoJunSang's Code
#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

bool isPrime(int i);

int main()
{
    int T,N;
    cin >> T;
    for(int i=0;i<T;i++)
    {
        cin >> N;
        for(int j=N/2 ;j>=2 ;j--)
        {
            if(isPrime(j) && isPrime(N-j))
            {
                cout << j << " " << N-j << "\n";
                break;
            }
        }
    }
    return 0;
}

bool isPrime(int i) 
{
	int rt;
	rt = sqrt(i);
	if (rt == 1 && i != 1) {	//2,3인 경우
		return true;
	}
	if (i % 2) {	//홀수일 경우
		for (int j = 2; j <= rt; j++) {
			if (!(i%j))
				return false;
			if (j == rt) {
				return true;
			}
		}
	}
}