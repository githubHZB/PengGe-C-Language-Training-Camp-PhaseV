// 定义宏，防止 Visual Studio 编译器在使用不安全的 C 标准库函数时产生警告
#define  _CRT_SECURE_NO_WARNINGS
// 包含标准输入输出头文件
#include<stdio.h>

// 主函数入口
int main()
{
    // 初始化一个整数变量num为1
    int num = 1;

    // 使用while循环条件：当num小于100时，执行循环体
    while (num < 100)
    {
        // 判断num是否能被3整除（即num除以3的余数是否为0）
        if (num % 3 == 0)
        {
            // 如果num是3的倍数，则输出提示信息
            printf("%d是3的倍数！\n", num);
        }

        // 循环结束后，将num加1，以便下一轮循环继续判断
        num++;
    }

    // 主函数返回0，表示程序执行成功
    return 0;
}

// 程序功能描述：
// 该程序用于找出并打印1到99之间所有能被3整除的整数。