//HeoJunSang's Code
#include<iostream>
using namespace std;

int main()
{
    int N,temp;
    int array[1001]={};
    cin >> N;
    for(int a=0;a<N;a++)
        cin >> array[a];
    
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
    for(int d=0;d<N;d++)
        cout << array[d] << "\n";

    return 0;
}
