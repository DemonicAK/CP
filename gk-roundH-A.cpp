#include "bits/stdc++.h"
using namespace std;
// ada run
int solve()
{
	long long length, runs;
	cin >> length >> runs;

	vector<long long> lap;

	for (long long i = 0; i < runs; i++)
	{
		long long dis;
		char dir;
		cin >> dis >> dir;
		if (dir == 'C')
		{
			lap.push_back(dis);
		}
		else
		{
			lap.push_back(-1 * dis);
		}
	}

	long long m = 0;
	long long dis = 0;
	for (long long i = 0; i < lap.size(); i++)
	{
		dis += lap[i];

		if (dis >= length)
		{
			while (dis >= length)
			{
				dis -= length;
				m++;
			}
		}

		else if (dis <= (-1 * length))
		{
			while (dis <= (-1 * length))
			{
				dis += length;
				m++;
			}
		}

		// cout<<"Case #"<<t<<": "<<m<<"\n";
	}
		return m;
}

// driver code starts

int main()
{
	long long t;
	// cout<<"Enter the number of test cases: ";
	cin >> t;
	int i = 1;
	while (i < t)
	{
		int m;
		m = solve();
		cout << "Case #" << i << ": " << m << "\n";
		i++;
		// t--;
	}
	return 0;
}