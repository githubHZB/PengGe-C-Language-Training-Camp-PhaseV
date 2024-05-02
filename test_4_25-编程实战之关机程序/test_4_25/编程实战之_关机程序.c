#define  _CRT_SECURE_NO_WARNINGS
//关机程序
//1.程序运行起来的时候，就开始倒计时60秒关机
//2.但是如果你能输入：你是猪，就取消关机
// 
//两个字符串比较相等的时候，不是使用==
//应该使用strcmp
//system --库函数，可执行系统命令
//stdlib.h
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);//输入的信息放在input数组中
	//判断input中存放的是不是“我是猪”
	if (strcmp("我是猪", input) == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}