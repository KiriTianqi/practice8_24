#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 120");
	again:
	printf("����:���ְ֡���ȡ���ػ�\n");
		scanf_s("%s", input,20);
		if (strcmp(input, "�ְ�") == 0)
		{
			system("shutdown -a");
		}
		else
		{
			goto again;
		}
	return 0;
}