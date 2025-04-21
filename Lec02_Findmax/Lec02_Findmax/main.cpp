#include <stdio.h>

int Findmax(int score[], int n)
{
	int tmp = score[0];
	for (int i = 0; i < n; i++) {
		if (tmp < score[i])
		{
			tmp = score[i];
		}
	}
	return tmp;
}

int main()
{
	int score[] = { 91, 29, 39, 56, 100 };
	int Max = Findmax(score, 5);
	printf("Max result=%d", Max);
}