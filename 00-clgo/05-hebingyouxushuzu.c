/*
    Description
    已知数组LA和LB中的数据元素按值非递减有序排列，现要求将LA和LB归并为一个新的数组LC，目LC中的数据元素仍然按值非递减有序排列。例
    如，设LA=(3,5,8,11).LB=(2,6,8,9.11,15,20)则LC=(2.3,6,6,8,8,9,11,11,15,20)
    Input
    有多组测试数据，每组测试数据占两行。第一行是集合A，第一个整数m(0<=m<=100）代表集合A起始有m个元素，后面有m个非递减排序的整数，代表A
    中的元素。第二行是集合B，第一个整数n(O<=n<=100)代表集合B起始有n个元素，后面有n个非递减排序的整数，代表B中的元素。每行中整数之间用一个
    空格隔开。
    Output
    每组测试数据只要求输出一行，这一行含有m+n个来自集合A和集合B中的元素。结果依旧是非递减的。每个整数间用一个空格隔开。
*/

#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int m, n;

    while (scanf("%d", &m) != EOF)
    {
        for (int i = 0; i < m; ++i)
        {
            scanf("%d", &a[i]);
        }

        scanf("%d", &n);
        for (int j = 0; j < n; ++j)
        {
            scanf("%d", &b[j]);
        }

        int i = 0, j = 0, k = 0;

        while (i < m && j < n)
        {
            if (a[i] < b[j])
            {
                c[k++] = a[i++];
            }
            else
            {
                c[k++] = b[j++];
            }
        }

        while (i < m)
        {
            c[k++] = a[i++];
        }

        while (j < n)
        {
            c[k++] = b[j++];
        }

        for (int t = 0; t < k; ++t)
        {
            if (t == 0)
            {
                printf("%d", c[t]);
            }
            else
            {
                printf(" %d", c[t]);
            }
        }
        printf("\n");
    }

    return 0;
}