#include <stdio.h>
#include <limits.h>

int min(int a, int b)
{
return (a < b) ? a : b;
}

int main()
{
int n, amount;
printf("Enter number of coin types: ");
scanf("%d", &n);

int coin[n + 1];
printf("Enter coin values:\n");
for (int i = 1; i <= n; i++)
scanf("%d", &coin[i]);

printf("Enter target amount: ");
scanf("%d", &amount);

int T[n + 1][amount + 1];

/* Initialization 1st column*/
for (int i = 0; i <= n; i++)
T[i][0] = 0;

for (int j = 1; j <= amount; j++)
T[0][j] = INT_MAX - 1;

/* DP Table */
for (int i = 1; i <= n; i++)
{
for (int j = 1; j <= amount; j++)
   {
    if (j >= coin[i])
        T[i][j] = min(T[i - 1][j], 1 + T[i][j - coin[i]]);
    else
        T[i][j] = T[i - 1][j];

          }
}

if (T[n][amount] == INT_MAX - 1)
 	printf("No solution exists.\n");
else
printf("Minimum number of coins = %d\n", T[n][amount]);

return 0;
}