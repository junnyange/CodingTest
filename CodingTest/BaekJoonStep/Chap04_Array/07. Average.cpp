//HeoJunSang's Code
#include<iostream>
using namespace std;

int main()
{
	int N , max;
    int arr[1000];
    double darr[1000];
    double sum = 0.0;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        cin >> arr[i];
    }
    max = arr[0];
    for(int j=1;j<N;j++)
    {
        if(max < arr[j])
            max = arr[j];
    }
    for(int k=0;k<N;k++)
    {
        darr[k] = arr[k]*100.0/max;
    }
    for(int m=0;m<N;m++)
    {
        sum += darr[m];
    }

    cout << fixed;
    cout.precision(10);
    cout << sum / N;
    return 0;
}