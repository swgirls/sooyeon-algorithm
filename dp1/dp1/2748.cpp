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
/*발생 문제: num번째 배열의 값을 출력하는건데 선언할때 num-1을 까먹고 작성해서 버퍼오류가 났음.
			 90일때 이상한 값이 뜸.
문제해결: 동적할당 할 때 num+1을 해줌.
         int로 받을 수 없는 큰수라 long을 해주었는데 long 범위도 넘어서 long long 해주었음.
*/