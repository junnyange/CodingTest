//HeoJunSang's Code
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int H,M;
    cin >> H >> M;
    if(M>=45) M-=45;
    else
    {
        if(H==0) H=23;
        else H-=1;
        M = 15+M;
    }
    cout << H << " " << M;
    return 0;
}

//1. 시간이 바뀔때
// 1) 전날로 갈때
// 2) 아닐때
//2. 시간이 안바뀔때