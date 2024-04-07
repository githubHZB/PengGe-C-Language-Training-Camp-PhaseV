// 首先定义宏，避免在使用某些不安全的C标准库函数时产生警告
#define _CRT_SECURE_NO_WARNINGS

// 引入标准输入输出头文件
#include<stdio.h>

// 主函数
int main()
{
    // 初始化三个整数变量a、b、c分别为2、3、1
    int a = 2;
    int b = 3;
    int c = 1;

    // 第一个if语句：若a<b，则交换a和b的值，确保a>=b
    if (a < b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }

    // 第二个if语句：若a<c，则交换a和c的值，此时a已经是a、b、c中的最大值或中间值
    if (a < c)
    {
        int tmp = a;
        a = c;
        c = tmp;
    }

    // 第三个if语句：若b<c，则交换b和c的值，但此处存在错误，因为tmp未赋值，会导致未定义行为
    // 应改为：tmp = b; b = c; c = tmp;
    if (b < c)
    {
        int tmp = b; // 这里应先赋予tmp当前b的值
        b = c;
        c = tmp; // 再进行交换，确保b>=c
    }

    // 输出排序后的结果
    printf("a=%d, b=%d, c=%d\n", a, b, c);

    // 主函数返回0，表示程序执行成功
    return 0;
}
