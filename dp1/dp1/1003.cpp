#include <iostream> 
using namespace std;

int main()
{
	int t = 0;
	int* num;
	int* num_zero = new int[41];
	int* num_one = new int[41];

	std::cin >> t;
	num = new int[t];

	num_zero[0] = 1;
	num_one[0] = 0;
	num_zero[1] = 0;
	num_one[1] = 1;

	for (int i = 0; i < t; i++) {
		cin >> num[i];

		if (num[i] > 40 || num[i] < 0)
		{
			return 0;
		}

		for (int j = 2; j <= num[i]; j++)
		{
			num_zero[j] = num_zero[j - 1] + num_zero[j - 2];
			num_one[j] = num_one[j - 1] + num_one[j - 2];
		}

	}

	for (int i = 0; i < t; i++)
		cout << num_zero[num[i]] << " " << num_one[num[i]] << endl;
}