//HeoJunSang's Code
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int T;
    int H,W,N;

    int floor;
    int room;
    cin >> T;
    for(int i=0;i<T;i++)
    {
        cin >> H >> W >> N;
        floor = N % H;
        if(floor == 0)
            floor = H;
        room =  ceil(double(N) / H);
        if(room<10)
            cout << floor << 0 << room << "\n";
        else
            cout << floor << room << "\n";
    }
    return 0;
}