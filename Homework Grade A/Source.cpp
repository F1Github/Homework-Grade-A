#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void pat(int& count)
{
	char str[5000];
	scanf("%[^\n]", &str);
	for (int i = 0; 1; i++)
	{
		if (str[i] == '\0') break;
		count++;
	}
}
int main()
{
	int count = 0;
	pat(count);
	printf("%d", count);
	return 0;
}