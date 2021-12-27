#include<stdio.h>

//汉诺塔
void hnt(int num, char source, char target, char auxiliary)
//num，圆盘的数量，source,起始柱，target,目标住，auxiliary，辅助柱
{
    static int i = 1;//统计移动次数
    if (num == 1)//如果圆盘数量为1，直接移动至目标柱
    {
        printf("第%d次：从%c移动至%c\n", i, source, target);
        i++;
    }
    else
    {
        hnt(num - 1, source, auxiliary, target);
        //递归调用hnt函数，将num-1个圆盘从起始柱移动到辅助柱
        printf("第%d次：从%c移动至%c\n", i, source, target);
        //将起始柱上最后一个圆盘移动到目标柱上
        i++;
        hnt(num - 1, auxiliary, target, source);
        //递归调用hnt函数，将辅助柱上的num-1圆盘移动到目标柱上
    }
}

int main()
{
    int h = 0;
    printf("汉诺塔的圆盘数量：");
    scanf("%d", &h);
    hnt(h, 'a', 'b', 'c');

    //圆盘数量，a为起始柱，b为目标柱，c为辅助柱
    return 0;
}
