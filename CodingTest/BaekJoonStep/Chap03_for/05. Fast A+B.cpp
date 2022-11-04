//HeoJunSang's Code
#include<iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int i, n, A, B;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> A >> B;
        cout << A + B << "\n";
    }
    return 0;
}