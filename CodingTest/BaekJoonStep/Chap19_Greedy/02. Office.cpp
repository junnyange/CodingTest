//HeoJunSang's Code
#include<iostream>
using namespace std;

int main()
{
	pair<int,int> p[100001];
    int N;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        cin >> p[i].first >> p[i].second;
    }

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N-i-1;j++)
        {
            if(p[i].second > p[i+1].second)
                p[i].swap(p[i+1]);
        }
    }
    int cnt = 0;
    int location = 0;
    bool pandan = true;

    int x;
    while(pandan)
    {
        int j;
        x = p[location].second;
        for(j=location;j<N;j++)
        {
            if(x <= p[j].first) //여기 중에서도 second가 가장 작은거 찾아야함 
            {
                if(location == N-1)
                {
                    pandan = false;
                }
                cnt++;
                location = j;
                break;
            }
        }   
    }
    cout << cnt;
    return 0;
}