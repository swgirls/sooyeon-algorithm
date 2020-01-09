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

	/*�߻� ����: ���� �ʹ� Ŀ�� 5000������ �ǵ� longlong�� �ȸ���.
	  �����ذ�: �迭�� ������ ���� 15746���� ������.
    */


}