#include <iostream>
#include <math.h>
using namespace std;

int main()
{ 

	long long n = 0;
	long long result = 0;

	cin >> n;
	
	if (n > 1000000 || n < 0)
	{
		return 0;
	}

	long long* numofsequence = new long long[n+1];
	numofsequence[1] = 1;
	numofsequence[2] = 2;

	for (int i = 3; i <= n; i++)
	{
		numofsequence[i] = numofsequence[i - 1] % 15746 + numofsequence[i - 2] % 15746;
	}
	result = numofsequence[n] % 15746;

	cout << result << endl;

	/*발생 문제: 수가 너무 커서 5000정도만 되도 longlong이 안먹힘.
	  문제해결: 배열에 넣을때 부터 15746으로 나눠줌.
    */


}