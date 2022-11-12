//HeoJunSang's Code
#include<iostream>
using namespace std;

int main()
{
    int N;
    int temp;
    int value; //답
    int rest;
    bool pandan = true , three = false;
    cin >> N;
    if(N>=5)
    {
        temp = N/5;
        if(N%5==0) //5로 나누어 떨어질때
            value = temp;
        else
        {
            rest = N%5;
            while(N>=rest)
            {
                if(rest%3==0)  //남은 값이 3의 배수일때
                {
                    three = true;
                    break;
                }
                temp--;
                rest+=5;
            }
            value = temp;
            if(three == false)
                pandan = false;
            else
                value += rest/3;
        } 
    }
    else
    {
        if(N == 3) value = 1;
        else pandan = false;
    }

    if(pandan==true) cout << value;
    else cout << -1;
    return 0;
}

/*

*/

