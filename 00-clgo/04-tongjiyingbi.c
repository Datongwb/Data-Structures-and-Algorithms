/*
    假设一堆1分、2分、5分组成的n个硬币总面值为m分，求一共有多少种可能的组合方式（某种面值的硬币可以数量可以为0）

    输入数据第一行有一个正整数T，表述有T组测试数据。接下来的T行，每行有两个数n，m，n和m的含义同上
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int T, n, m, c1, c2, c5, k;
    scanf("%d", &T);
    for (int i = 0; i < T; ++i)
    {
        scanf("%d%d", &n, &m);
        k = 0;
        for (c5 = 0; 5 * c5 <= m; ++c5)
        {
            for (c2 = 0; 2 * c2 <= m - 5 * c5; ++c2)
            {
                if (c1 + c2 + c5 == n)
                {
                    ++k;
                }
            }
        }
        printf("%d\n", k);
    }
    return 0;
}