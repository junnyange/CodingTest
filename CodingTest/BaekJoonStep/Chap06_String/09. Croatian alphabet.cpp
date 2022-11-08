//HeoJunSang's Code
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string S;
    int count = 0;
    cin >> S;
    for(int i=0;i<S.length();i++)
    {
        count ++;
        if(S[i] == '-')
        {
            if(S[i-1]=='c' || S[i-1]=='d')
                count--;
        }
        else if(S[i] == '=')
        {
            if(S[i-1]=='c' || S[i-1] == 's')
                count--;
            else if(S[i-1]=='z')
            {
                count--;
                if(S[i-2] == 'd')
                    count--;
            }
        }
        else if(S[i] == 'j')
        {
            if(S[i-1] == 'l' || S[i-1] == 'n')
                count--;
        }
        
    }

    cout << count;
    return 0;
}

//다시한번 풀어보자