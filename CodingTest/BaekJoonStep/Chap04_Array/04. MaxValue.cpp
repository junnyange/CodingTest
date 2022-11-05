//HeoJunSang's Code
#include<iostream>
using namespace std;

int main()
{
    int a=0,max;
    int array[9]={0,};
    int i;
    for (i = 0; i < 9; i++)
        cin >> array[i];

    max = array[0];
    for (i = 1; i < 9; i++)
    {
        if (max < array[i])
        {
            max = array[i];
            a = i;
        }
            
        
    }
    cout << max << "\n" << a+1;
    return 0;
}