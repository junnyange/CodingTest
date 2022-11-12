//HeoJunSang's Code
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,v;
    int day = 0;
    cin >> a >> b >> v;
    day = ceil((v-a)/(a-b)) + 1;
    cout << day << "\n";
    return 0;
}

/*

도착하기 직전을 생각해보자. 이런 문제 잘 풀어야한다.......답지 그만보고...

1 2 -> 1
2 3 -> 2
3 4 -> 3
4 5 end
5
*/