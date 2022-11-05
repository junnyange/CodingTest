//HeoJunSang's Code
#include<iostream>
using namespace std;

int main()
{
	int C,N, count;
    double sum, ave , ratio;
    int arr[1000];
    cin >> C;
    for(int i=0;i<C;i++)
    {
        cin >> N;
        for(int j=0;j<N;j++)
        {
            cin >> arr[j];
        }
        sum =0.0;
        for(int k=0;k<N;k++)
        {
            sum += arr[k];
        }
        ave = sum / N;
        count = 0;
        for(int z=0;z<N;z++)
        {
            if(ave < arr[z])
                count++;
        }
        ratio = double(count) * 100 / N;
        cout << fixed;
        cout.precision(3);
        cout << ratio << "%" <<  "\n";
    }
    return 0;
}