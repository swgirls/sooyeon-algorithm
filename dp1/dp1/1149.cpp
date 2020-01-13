#include <iostream>
#include <algorithm>
using namespace std;
#define MIN(X,Y) ((X) < (Y) ? (X) : (Y))  

int main()
{
	int n = 0;
	
	cin >> n; //test case input
    if (n > 1000 || n <= 0)
	{
		return 0;
	}

	int cost[1001][3];
	int min_of_cost[1001][3];

	for (int i = 1; i <= n; i++) //cost input
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> cost[i][j];
			if (cost[i][j] > 1000 || cost[i][j] <= 0)
				return 0;
		}
	}
	min_of_cost[0][0] = 0;
	min_of_cost[0][1] = 0;
	min_of_cost[0][2] = 0;

	for (int i = 1; i <= n; i++)
	{
		min_of_cost[i][0] = MIN(min_of_cost[i - 1][1], min_of_cost[i - 1][2]) + cost[i][0];
		min_of_cost[i][1] = MIN(min_of_cost[i - 1][0], min_of_cost[i - 1][2]) + cost[i][1];
		min_of_cost[i][2] = MIN(min_of_cost[i - 1][0], min_of_cost[i - 1][1]) + cost[i][2];
		//cout << min_of_cost[i][0] << min_of_cost[i][1] << min_of_cost[i][2] << endl;
	}
	
	int min_cost_of_coloring_house = min({ min_of_cost[n][0],min_of_cost[n][1],min_of_cost[n][2] });
	cout << min_cost_of_coloring_house << endl;
	return 0;

}
/*
발생문제: 이차원배열동적할당을 했더니 초기화가 잘 되지않아 디버깅오류가 났음.
해결방법: 동적할당을 복잡하게 해주지않고 문제에서 최대값으로 명시한 1000을 맥스로 잡아서 할당해줌. */