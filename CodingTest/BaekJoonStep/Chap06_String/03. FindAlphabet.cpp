//HeoJunSang's Code
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string S;
    int arr[26];
    fill_n(arr,26,-1);
    cin >> S;
    for(int i=S.length()-1;i>=0;i--)
    {
        arr[S[i]-97] = i;
        //처음 등장하는 위치는 뒤부터 하면 편하다!
    }
    for(int j=0;j<26;j++)
        cout << arr[j] << " ";
    return 0;
}

//a 97