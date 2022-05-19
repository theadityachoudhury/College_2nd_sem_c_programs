#include <stdio.h>

int main(void)
{
	// your code goes here
	int t, d, l, r;
	scanf("%d", &t);
	if (t > 0 && t <= 100000)
	{
		while (t--)
		{
			scanf("%d %d %d", &d, &l, &r);
			if (d > 0 && d < 1000000000 && l > 0 && l <= r && r <= 1000000000)
			{
				if (d >= l && d <= r)
					printf("Take second dose now\n");
				else if (d > l && d > r)
					printf("Too Late\n");
				else if (d < l && d < r)
					printf("Too Early\n");
			}
		}
	}
	return 0;
}
