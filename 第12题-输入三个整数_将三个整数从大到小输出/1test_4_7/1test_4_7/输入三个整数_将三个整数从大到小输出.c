// ���ȶ���꣬������ʹ��ĳЩ����ȫ��C��׼�⺯��ʱ��������
#define _CRT_SECURE_NO_WARNINGS

// �����׼�������ͷ�ļ�
#include<stdio.h>

// ������
int main()
{
    // ��ʼ��������������a��b��c�ֱ�Ϊ2��3��1
    int a = 2;
    int b = 3;
    int c = 1;

    // ��һ��if��䣺��a<b���򽻻�a��b��ֵ��ȷ��a>=b
    if (a < b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }

    // �ڶ���if��䣺��a<c���򽻻�a��c��ֵ����ʱa�Ѿ���a��b��c�е����ֵ���м�ֵ
    if (a < c)
    {
        int tmp = a;
        a = c;
        c = tmp;
    }

    // ������if��䣺��b<c���򽻻�b��c��ֵ�����˴����ڴ�����Ϊtmpδ��ֵ���ᵼ��δ������Ϊ
    // Ӧ��Ϊ��tmp = b; b = c; c = tmp;
    if (b < c)
    {
        int tmp = b; // ����Ӧ�ȸ���tmp��ǰb��ֵ
        b = c;
        c = tmp; // �ٽ��н�����ȷ��b>=c
    }

    // ��������Ľ��
    printf("a=%d, b=%d, c=%d\n", a, b, c);

    // ����������0����ʾ����ִ�гɹ�
    return 0;
}
