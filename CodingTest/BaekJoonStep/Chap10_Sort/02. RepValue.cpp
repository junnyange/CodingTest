//HeoJunSang's Code
#include<iostream>
using namespace std;

int main()
{
	int array[5], temp ,sum=0;
    for(int i=0;i<5;i++)
    {
        cin >> array[i];
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5-i-1;j++)
        {
            if(array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    for(int i=0;i<5;i++)
    {
        sum += array[i];
    }

    cout << sum / 5 << "\n" << array[2];
    return 0;
}