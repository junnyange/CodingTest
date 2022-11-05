//HeoJunSang's Code
#include<iostream>
using namespace std;

int main()
{
	int N,X,count=0;
    int arr[10000];
    cin >> N >> X;
    for(int i=0;i<N;i++)
    {
        cin >> arr[i];
    }
    for(int j=0;j<N;j++)
    {
        if(arr[j] < X)
            cout << arr[j] << " ";
    }
    return 0;
}