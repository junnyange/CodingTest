//HeoJunSang's Code
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int N,temp;
    double sum=0;
    int array[500001];
    int value[8001];
    fill_n(value,8001,0);
    cin >> N;
    for(int i=0;i<N;i++)
    {
        cin >> array[i];
        sum += array[i];
        value[array[i]+4000]++;
    }

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N-i-1;j++)
        {
            if(array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    if(round(sum / N) != 0)
        cout << round(sum / N) << "\n";
    else
        cout << "0" << "\n";
    cout << array[N/2] << "\n";
    
    
    // 최빈값 구현 바람.
    
    int max = -5000;
    int min = 5000;
    for(int i=0;i<N;i++)
    {
        if(max < array[i])
            max = array[i];
    }
    for(int i=0;i<N;i++)
    {
        if(min > array[i])
            min = array[i];
    }
    cout << max - min;
    return 0;
}