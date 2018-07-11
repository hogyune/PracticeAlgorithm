#include <stdio.h>

int coins[101];
int sum[10001] = { 0 };

int main()
{
	int n, k, i, j;
	
	scanf("%d %d", &n, &k);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &coins[i]);
	}

	sum[0] = 1;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= k; j++)
		{
			if (j >= coins[i])
			{
				sum[j] += sum[j - coins[i]];
			}
		}
	}
	printf("%d\n", sum[k]);
	return 0;
}