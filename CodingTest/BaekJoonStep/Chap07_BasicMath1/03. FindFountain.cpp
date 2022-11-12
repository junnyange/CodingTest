//HeoJunSang's Code
#include<iostream>
using namespace std;

/*
예전에 풀었던 코드인데,
값이 1,2,3,4 이렇게 증가할떄
즉 1-3-6-10 이런 방식으로 값이 끝일때
while(1)
	{
		sum += i;
		if(sum>=N) break;
		i++;
	}
이 코드에 대해 생각해보자!
*/
int main()
{
    pair<int,int> p;
	int X;
    cin >> X;
    bool stop = false;
    int c =2 , j=1; // 2,3,4,5,6..
    while(!stop)
    {
        if(c%2==0)
        {
            p.first = c-1;
            p.second = 1;
            while(1)
            {
                if(X==j)
                {
                    stop = true;
                    break;
                }
                if(p.first == 1)
                {
                    c++;
                    break;
                }
                j++;
                p.first--;
                p.second++;
            }
        }
        else
        {
            p.first = 1;
            p.second = c-1;
            while(1)
            {
                if(X==j)
                {
                    stop = true;
                    break;
                }
                if(p.second == 1)
                {
                    c++;
                    break;
                }
                j++;
                p.first++;
                p.second--;
                
            }
        }
        j++;
    }
    cout << p.first << "/" << p.second;
    return 0;
}

/*
1/1 큰게 먼저 오고  짝   2
1/2 2/1 작은게 먼저오고  홀  3
3/1 2/2 1/3 큰게 먼저오고  짝  4
1/4 2/3 3/2 4/1 작은게 먼저옴 홀  5

*/