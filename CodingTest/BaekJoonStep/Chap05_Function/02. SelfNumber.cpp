//HeoJunSang's Code
#include<iostream>
using namespace std;

int selfNumber(int n);

int main()
{
    int count;
	for(int i=1;i<=10000;i++)
    {
        count = 0;
        for(int j=1;j<=i;j++)
            if(selfNumber(j) == i)
                count++;
        if(count == 0)
            cout << i << "\n";   
    }
    return 0;

    /*
    int arr[100000] = {0,};
    int i;
    for(i=0;i<10000;i++)
    {
        arr[selfNumber(i)]++;
        if(arr[i] == 0)
            cout << i << "\n";
    }
    return 0;
    */ //예전 아이디어인데 더 좋아보임(시간복잡도면에서)
}

int selfNumber(int n)
{
    int sum = n;
    while(n>0)
    {
        sum += n%10;
        n /= 10;
    }
    return sum;
}