//E:\HZ\Data-Structures-and-Algorithms-sol\algorithms toolbox\week2_algorithmic_warmup
#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    int ap = a % b;
    gcd(b, ap);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
    
    return 0;
}
