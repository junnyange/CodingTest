//HeoJunSang's Code
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
    int N;
    int totalScore, score;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        score = 0;
        totalScore = 0;
        cin >> s;
        for(int j=0;j<s.length();j++)
        {
            if(s[j] == 'O')
            {
                score++;
                totalScore += score;
            }
            else
            {
                score = 0;
            }   
        }
        cout << totalScore << "\n";
    }
    return 0;
}