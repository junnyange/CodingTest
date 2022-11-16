//HeoJunSang's Code
#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
	int N,k ,key;
    int array[1001];
    cin >> N >> k;
    for(int i=0;i<N;i++) cin >> array[i];

    for(int i=1;i<N;i++)
    {   
        int j;
        key = array[i];
        for(j=i-1;j>=0 ;j--)
        {
            if(key < array[j]) 
                array[j+1] = array[j];
            else
                break; //삽입정렬은 아니면 빠져나와야한다. 이해 중요.
        }
        array[j+1] = key;
    }

    cout << array[N-k];
    return 0;
}