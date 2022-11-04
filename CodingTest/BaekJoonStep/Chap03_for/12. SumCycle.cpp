//HeoJunSang's Code
#include<iostream>
using namespace std;

int main()
{
	int N;
    int nt, count = 0;
    cin >> N;
    
    nt = N;
    do
    {
        nt = (nt%10) * 10 + (((nt/10)+(nt%10)) % 10);
        count++;
    } while (nt != N);
    
    cout << count;

    return 0;
}

/*
26 2+6=8 68 6+8=14 84
*/