//HeoJunSang's Code
#include<iostream>
using namespace std;

int main()
{
    int N,v;
    int count = 0;
    int arr[100];
    cin >> N;
    for(int i=0;i<N;i++)
    {
        cin >> arr[i];
    }
    cin >> v;
    for(int j=0;j<N;j++)
    {
        if(arr[j] == v)
            count++;
    }
    cout << count;
    return 0;
}