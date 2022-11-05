//HeoJunSang's Code
#include<iostream>
using namespace std;

int main()
{
    int x;
	int arr[30] ={0,};
    for(int i=0;i<28;i++)
    {
        cin >> x;
        arr[x-1] = 1;
    }
    for(int j=0;j<30;j++)
    {
        if(arr[j]==0)
            cout << j+1 << "\n";
    }
    return 0;
}