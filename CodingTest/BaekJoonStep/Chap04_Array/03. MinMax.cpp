//HeoJunSang's Code
#include<iostream>
using namespace std;

int main()
{
	int N;
    int arr[10000000];
    cin >> N;
    for(int i=0;i<N;i++)
    {
        cin >> arr[i];
    }
    int min = arr[0];
    int max = arr[0];
    for(int j=0;j<N;j++)
    {
        if(min > arr[j])
            min = arr[j];
        if(max < arr[j])
            max = arr[j];
    }
    cout << min << " " << max;
    return 0;
}