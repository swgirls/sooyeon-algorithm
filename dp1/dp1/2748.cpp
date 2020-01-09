#include <iostream>

int main()
{
	int num = 0;

	std::cin >> num;

	if (num == 0)
	{
		std::cout << "0";
		return 0;
	}
	if (num == 1)
	{
		std::cout << "1";
		return 0;
	}

	long long* fibo = new long long[num + 1];
	fibo[0] = 0;
	fibo[1] = 1;

	if (num > 90 || num <= 0)
	{
		return 0;
	}

	for (int i = 2; i <= num; i++)
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}

	std::cout << fibo[num] << '\n';

	delete[] fibo;
	return 0;
}
/*�߻� ����: num��° �迭�� ���� ����ϴ°ǵ� �����Ҷ� num-1�� ��԰� �ۼ��ؼ� ���ۿ����� ����.
			 90�϶� �̻��� ���� ��.
�����ذ�: �����Ҵ� �� �� num+1�� ����.
         int�� ���� �� ���� ū���� long�� ���־��µ� long ������ �Ѿ long long ���־���.
*/