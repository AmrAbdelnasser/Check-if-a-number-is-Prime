#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// https://en.wikipedia.org/wiki/Primality_test
bool is_prime(int n)
{
    if (n==1)
    {
        return false;
    }
    else if (n<=3)
    {
        return true;
    }
    else if ((n%2 == 0) || (n%3 ==0))
    {
        return false;
    }

    int i=5;
    while (pow(i, 2) <= n)
    {
        if ((n%i == 0) || (n % (i+2) == 0))
        {
        return false;
        }
        i+=6;
    }
    return true;

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T, n;
    cin>>T;
    while(T--)
    {
        cin>>n;
        if(is_prime(n))
        {
            cout<<"Prime"<<'\n';
        }
        else
        {
            cout<<"Not prime"<<'\n';
        }
        //cout<<n;
    }
    return 0;
}
