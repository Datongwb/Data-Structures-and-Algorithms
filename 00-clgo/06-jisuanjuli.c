/*
    Description
        编写函数distance，计算两点间的距离。
        函数原型如下:
        double distance(int x1, int y1, int x2, int y2);
        其中x1、y1及x2、y2分别为P、Q两点的坐标，即P(x1,y1)、Q(x2.y2)。假设坐标点单位均为整数。
        函数返回值为PQ两点间的距离。
        从键盘上输入一下正整数n(2<=n<=10)，然后依次输入n个点的坐标。再依次计算这n个点间的n-1条折线的距离之和，并输出。输出结果保留两位小数。
        如：输入3583584，则代表3个点分别为R(5,8)、S(3,5)、T(8,4)。计算并输出RS及ST的距离和。
        补充:
            //求平方根的函数是sqrt
             #include <math.h>
             double sqrt( double num );
    Input
        先输入一个正整数n，说明数据的组数，然后再输入2n个整数，代表n个点的坐标
    Output
        依次计算第1点到第2点、第2点到第3点……第n-1点到第n点之间的距离并求和，结果保留两位小数。
*/

#include <stdio.h>
#include <math.h>

double distance(int x1, int y1, int x2, int y2)
{
    double dx = (double)x1 - x2;
    double dy = (double)y1 - y2;
    return sqrt(dx * dx + dy * dy);
}

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1)
        return 1;

    int x, y;
    if (scanf("%d %d", &x, &y) != 2)
        return 1;

    double total = 0.0;
    for (int i = 1; i < n; ++i)
    {
        int nx, ny;
        if (scanf("%d %d", &nx, &ny) != 2)
            break;
        total += distance(x, y, nx, ny);
        x = nx;
        y = ny;
    }

    printf("%.2f\n", total);

    return 0;
}