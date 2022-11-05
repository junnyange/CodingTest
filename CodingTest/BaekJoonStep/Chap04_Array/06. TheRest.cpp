//HeoJunSang's Code
#include<iostream>
using namespace std;

int main()
{
    int x;
    int temp;
    int arr[10];
    int pandan[42] ={};
    int count = 10;
    for(int i=0;i<10;i++)
    {
        cin >> x;
        arr[i] = x%42;
    }
    for(int j=0;j<10;j++)
    {
        for(int k=j;k<10;k++)
        {
            if(arr[j] == arr[k] && k!=j && pandan[arr[k]-1]!=1)
                count--;
        }
        pandan[arr[j]-1] = 1; 
    }
    cout << count;
    return 0;
}
