#include<stdio.h>
#include<string.h>
main()
{
printf("作者邮箱：yubowen@mail.sdu.edu.cn\n");	printf("本程序可判断一个数是否是回文字符串。\n");
	char pig [10];
	int cat;
	float dog;
	dog=0;
	gets (pig);
	cat=strlen(pig);
	
	
	int i;
	
	for (i=0;i<=cat;i++)//坑人！
	{
		printf("%c,%c\n",pig[i],pig[cat-i-1]);
		if (pig[i]!=pig[cat-i-1])
		{dog=1;break;}
	}
	
	if (dog==0)
	printf("是回文字符串。\n");
	else
	printf("不是回文字符串。\n");
		
	
	
}