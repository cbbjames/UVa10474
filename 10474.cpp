//#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
int a[10010] = { 0 };
int main()
{
	int n = 0,kase=0;
	while ((scanf("%d", &n) == 1) && n)
	{
		printf("CASE# %d:\n", ++kase);
		memset(a, 0, sizeof(a));
		int q = 0;
		scanf("%d", &q);
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n);
		for (int i = 0; i < q; i++)
		{
			int Q = 0;
			cin >> Q;
			int temp=0;
			for (int j = 0; j < n; j++)
			{
				if (Q == a[j])
				{
					temp = Q;
					printf("%d found at %d\n", Q, j+1);
					break;
				}
			}
			if (!temp)
				printf("%d not found\n", Q);
		}
	}
	//system("PAUSE");
	return 0;
}