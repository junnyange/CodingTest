//HeoJunSang's Code
#include<iostream>
using namespace std;
int main()
{
	int N;
	bool pandan;
	int i,j,count=0;
	string S;
	int a[27]={};
	cin >> N;
	for(i=0;i<N;i++)
	{
		cin >> S;
		fill_n(a,27,0);
		pandan = true;
		for(j=0;j<S.length();j++)
		{
			a[S[j]-'a'] = 1;
			if(S[j]!=S[j+1]&&a[S[j+1]-'a']==1)
			{
				pandan = false;
				break;
			}
		}
		if(pandan == true) count++;
	}
	cout << count;
	return 0;
}

//다시한번 풀어보자