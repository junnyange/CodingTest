//HeoJunSang's Code
#include<iostream>
using namespace std;

/*
int f(int a,int b)
{
	if(a==0)
		return b;
	else if(b==1)
		return 1;
	else 
		return f(a-1,b)+f(a,b-1);
}

훨씬 간단하다. 재귀에 대해 생각해보자.
조건을 찾고, 그 조건에 맞게 구성해보자.
*/

void f(int k, int n);
int sum = 0;
int main()
{
    int T;
    int k,n;
    cin >> T;
    for(int i=0;i<T;i++)
    {
        sum = 0;
        cin >> k;
        cin >> n;
        f(k,n);
        cout << sum << "\n";
    }
    return 0;
}

void f(int k,int n)
{
    if(k==1)
        for(int j=1;j<=n;j++)
        {
            sum+=j;
        }
    else
    {
        k--;
        for(int i=1;i<=n;i++)
        {
            f(k,i);
        }
    } 
}


/*
13
1 12 123
3층 3호
2층 1호 + 2층 2호 + 3층 3호
1층 1호 + (1층 1호 + 1층 2호)
+ (1층 1호 + 1층 2호 + 1층 3호)

= 0층 1호 + (0층 1호 + (0층 1호 + 0층 2호))
+ (0층 1호 + 0층 1호 + 0층 2호 + 0층 1호 
+ 0층 2호 0층 3호)
= 1 + (1 + (1 + 2)) + (1+(1+2)+(1+2+3))
2층 3호
1층 1호 + 1층 2호 + 1층 3호 
= 0층 1호 + (0층 1호 + 0층 2호) 
+ (0층 1호 + 0층 2호 + 0층 3호)

1  + 1+2 + 1+2+3
*/