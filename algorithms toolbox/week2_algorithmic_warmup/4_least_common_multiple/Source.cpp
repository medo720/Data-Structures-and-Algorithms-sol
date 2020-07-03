//E:\HZ\Data-Structures-and-Algorithms-sol\algorithms toolbox\week2_algorithmic_warmup
#include <iostream>
using namespace std;
long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    int ap = a % b;
    gcd(b, ap);
}
int main()
{
    long long a, b;
    cin >> a >> b;
    long long p = a * b;
    p = p / gcd(a, b);
        cout << p;

    return 0;
}
