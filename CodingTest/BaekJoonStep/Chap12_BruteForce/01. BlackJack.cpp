//HeoJunSang's Code
#include<iostream>
using namespace std;

int main()
{
	int N,M;
    int array[101];
    int max = 0;
    int value;
    cin >> N >> M;

    for(int i=0;i<N;i++)
    {
        cin >> array[i];
    }

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(j!=i)
            {
                for(int k=0;k<N;k++)
                {
                    if(k!=i && k!=j)
                    {
                        value = array[i] + array[j] + array[k];
                        if(max < value && value <= M)
                            max = value;
                    }   
                }
            }
        }
    }

    cout << max;
    return 0;
}