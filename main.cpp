#include <iostream>

using namespace std;

int gcd(int n, int m)
{
if((n>=m)&&(n%m)==0)
        return (m);
else gcd(m,(n%m));
}
int main()
{
    int n,m,result;
    cout <<"Enter first number(positive):" <<endl;
    cin >>n;

    cout <<"Enter second number(positive):" <<endl;
    cin >>m;

    result=gcd(n,m);

    cout <<"GCD of "<<n<<" and "<<m<<" is" <<result;
    return 0;
}
