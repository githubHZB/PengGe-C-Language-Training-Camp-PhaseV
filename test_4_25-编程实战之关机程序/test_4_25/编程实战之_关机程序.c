#define  _CRT_SECURE_NO_WARNINGS
//�ػ�����
//1.��������������ʱ�򣬾Ϳ�ʼ����ʱ60��ػ�
//2.��������������룺��������ȡ���ػ�
// 
//�����ַ����Ƚ���ȵ�ʱ�򣬲���ʹ��==
//Ӧ��ʹ��strcmp
//system --�⺯������ִ��ϵͳ����
//stdlib.h
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);//�������Ϣ����input������
	//�ж�input�д�ŵ��ǲ��ǡ�������
	if (strcmp("������", input) == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}