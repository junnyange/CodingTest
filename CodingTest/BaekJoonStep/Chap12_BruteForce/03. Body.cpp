//HeoJunSang's Code
#include<iostream>
using namespace std;

int main()
{
	pair<int,int> p[50];

    int N;
    int cnt;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        cin >> p[i].first >> p[i].second;
    }

    for(int i=0;i<N;i++)
    {
        cnt = 0;
        for(int j=0;j<N;j++)
        {
            if(i!=j)
            {
                if(p[i].first < p[j].first && p[i].second < p[j].second)
                    cnt++;
            }
        }
        cout << cnt+1 << " ";
    }
    return 0;
}