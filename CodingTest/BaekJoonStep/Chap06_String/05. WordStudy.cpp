//HeoJunSang's Code
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int arr[26] = {0,};
	string S;
    cin >> S;
    for(int i=0;i<S.length();i++)
    {
        if(S[i] >= 65 && S[i]<=90)
            arr[S[i]-65]++;
        else if(S[i] >= 97 && S[i] <= 122)
            arr[S[i]-97]++;
    }
    int max = arr[0];
    bool overLap = false;
    int location = 0;

    for(int j=1;j<26;j++) //j가 1부터 시작하는거 명심 또 명심!
    {
        if (max == arr[j])
            overLap = true;
        else if(max < arr[j])
        {
            max = arr[j];
            location = j;
            overLap = false;
        }
    }
    if(overLap == true)
        cout << "?";
    else
        cout << char(location+65);
    return 0;
}

//A 65 Z 90
//a 97 z 122