#include <iostream>
using namespace std;

//1 1 1 2 2 3 4 5 7 9 12 16

int main()
{
	int t = 0;
	long long p[100];
	cin >> t;
	int* n = new int[t];
	
	for (int i = 0; i < t; i++)
	{
		 cin >> n[i];

		if (n[i] > 100 || n[i] < 1)
		{
			return 0;
		}

		p[1] = 1;
		p[2] = 1;
		p[3] = 1;
		p[4] = 2;
		p[5] = 2;
		
		for (int j = 6; j <= n[i]; j++)
		{
			p[j] = p[j - 1] + p[j - 5];
		}

	}

	for (int i = 0; i < t; i++)
	{
		cout << p[n[i]] << endl;
	}
	return 0;
}

