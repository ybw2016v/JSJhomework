#include<stdio.h>
#include<string.h>
main()
{
	char * k;
	printf("作者邮箱：yubowen@mail.sdu.edu.cn\n");
	char pig[100];
	char egg[20];
	egg[0] = 'y';
	egg[1] = '\0';
	int cat;
	float dog;
	while (egg[0] == 'y' && egg[1] == '\0')
	{
		printf("本程序可判断一个字符串是否是回文字符串。\n");
		dog = 0;
		gets(pig);
		cat = strlen(pig);
		k=pig;
		int i;
		for (i = 0; i < cat; i++)
		{
			printf("%p,%p\n", &pig[i], &pig[cat - i - 1]);
			if (pig[i] != pig[cat - i - 1])
			{
				dog = 1;
				break;
			}k++;
			printf("%c\n",*k);
		}
		printf("%f", dog);
		if (dog == 0)
			printf("是回文字符串。\n");
		else
			printf("不是回文字符串。\n");
		printf("是否继续运行?（y/n)\n");
		 gets(egg);
	}
}