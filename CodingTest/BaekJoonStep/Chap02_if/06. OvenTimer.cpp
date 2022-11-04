//HeoJunSang's Code
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int H,M,C;
    cin >> H >> M;
    cin >> C;
    if(M+C < 60)
        M = M + C;
    else
    {
        int HC = H + C/60; 
        int MC = M + C%60;
        HC = HC + MC/60;
        MC = MC % 60;

        if(HC >= 24)
            HC = HC - 24;

        H = HC;
        M = MC;
    }
    cout << H << " " << M;
    return 0;
}
/*
1. 시간이 바뀌지 않을때

2. 시간이 바뀔때
    1)시간이 1만 바뀔때
    2)시간이 2이상 바뀔때
    - 만약 시간이 바뀌었을때 24이상이 되었을때
*/