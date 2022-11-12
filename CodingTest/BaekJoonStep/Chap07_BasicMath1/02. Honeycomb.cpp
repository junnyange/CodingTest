//HeoJunSang's Code
#include<iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int i = 2;
    int c = 7 ,cc= 6 , count = 2;
	if(N==1) cout << 1;
    else
    {
        while(i!=N)
        {
            if(i==c)
            {
                cc += 6;
                c += cc;
                count ++;
            }
            i++;
        }
        cout << count;
    }
    return 0;
}

/*
  1 - 1  1개
2~7 - 2  6개
8~19- 3  12개
20~37 - 4 18개
38~61 - 5  24개
*/

