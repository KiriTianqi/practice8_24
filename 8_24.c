#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 120");
	again:
	printf("输入:“爸爸”来取消关机\n");
		scanf_s("%s", input,20);
		if (strcmp(input, "爸爸") == 0)
		{
			system("shutdown -a");
		}
		else
		{
			goto again;
		}
	return 0;
}