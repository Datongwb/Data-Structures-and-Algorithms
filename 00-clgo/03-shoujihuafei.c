/*
    小明的手机每天消费1元，每消费K元就可以获赠1元，一开始小明有M元，问题最多可以用多少天？
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int m, k, d;
    while (scanf("%d%d", &m, &k), m != 0 && k != 0)
    {
        d = 0;
        while (m > 0)
        {
            --m;
            ++d;
            if (d % k == 0)
            {
                ++m;
            }
        }
        printf("%d\n", d);
    }
    return 0;
}