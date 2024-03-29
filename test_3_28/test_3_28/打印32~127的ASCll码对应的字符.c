// 定义宏，避免在使用不安全的 CRT 函数时产生警告
#define _CRT_SECURE_NO_WARNINGS

// 包含标准输入输出头文件
#include <stdio.h>

// 主函数入口
int main()
{
    // 定义一个整数变量 i，并初始化为 0
    int i = 0;

    // 使用 for 循环遍历 ASCII 码从 32 到 127 的所有字符（包括两端值）
    for (i = 32; i <= 127; i++)
    {
        // 使用 printf 函数打印当前整数值所对应的 ASCII 字符
        printf("%c", i);

        // 检查 i 对 16 取模的结果是否为 15，即每满 16 个字符换行
        if (i % 16 == 15)
            printf("\n"); // 如果满足条件，则打印一个换行符
    }

    // 主函数返回 0，表示程序执行成功
    return 0;
}
