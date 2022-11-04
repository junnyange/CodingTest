#include<iostream>

using namespace std;

int main()
{
    int X,Y,Z,price,max = 0;
    cin >> X >> Y >> Z;
    if(X==Y && Y==Z && Z==X)
        price = 10000 + (X*1000);
    else if(X==Y)
        price = 1000 + (X*100);
    else if(Y==Z)
        price = 1000 + (Y*100);
    else if(Z==X)
        price = 1000 + (Z*100);
    else
    {
        if(X>Y)
        {
            if(X>Z)
                max = X;
            else
                max = Z;
        }
        else
        {
            if(Y>Z)
                max = Y;
            else
                max = Z;
        }
        price = max*100;
    }
    cout << price;
    return 0;
}

/*
x y z
if
1. 3개가 다 같음
x==y && y==z 

else if
2. 2개만 같음
x y , y z , z x
x==y || y==z || z==x

else
3. 다 다름

*/