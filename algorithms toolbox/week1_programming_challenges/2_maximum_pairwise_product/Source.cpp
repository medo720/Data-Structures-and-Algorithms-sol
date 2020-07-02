#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	long long* arr = new long long[n];
	for (int i = 0; i < n; i++)
	{
		long long t;
		cin >> t;
		arr[i] = t;
	}
	long long max1 = -1;
	long long index1 = -1;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max1)
		{
			max1 = arr[i];
			index1 = i;
		}
	}
	long long max2 = -1;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max2 && i!=index1)
		{
			max2 = arr[i];
		}
	}
	long long result = max1 * max2;
	cout << result;
	return 0;
}