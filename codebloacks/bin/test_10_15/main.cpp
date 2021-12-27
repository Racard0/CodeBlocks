#include <stdio.h>
#include <stdlib.h>

//BC29
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int i = 2 << (n - 1);
//    printf("%d\n", i);
//    return 0;
//}


//BC30
//int main()
//{
//    int n, h ,m;
//    scanf("%d %d %d", &n, &h, &m);
//    int s = n - (m / h);
//    if(m % h != 0)
//    {
//        s--;
//    }
//    printf("%d", s);
//    return 0;
//}


//BC32
//int main()
//{
//    printf("%s\t    %s\t    %s\n%", "Name", "Age", "Gender");
//    printf("---------------------\n");
//    printf("%s\t    %s\t    %s\n%", "Jack", "18", "man");
//    return 0;
//}


//BC33
//int main(){
//    int a,b,c,d,e;
//    scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
//    float p = (a+b+c+d+e) / 5.0;
//    printf("%.2f", p);
//    return 0;
//}


//BC34
//int main(){
//    int o, x;
//    scanf("%x %o", &o, &x);
//    int n  = o + x;
//    printf("%d", n);
//    return 0;
//}


//BC35
//int main()
//{
//    char v;
//    scanf("%c", &v);
//    if(v >= 65 && v <= 90 || v >= 97 && v <= 122)
//    {
//        printf("YES");
//    }
//    else
//    {
//        printf("NO");
//    }
//    return 0;
//}


//BC36
//int main()
//{
//    int k;
//    float h;
//    scanf("%d %f", &k, &h);
//    float bmi = k / (h * h);
//    if(bmi >= 18.5 && bmi <= 23.9)
//    {
//        printf("Normal");
//    }
//    else
//    {
//        printf("Abnormal");
//    }
//    return 0;
//}

//BC37
int main()
{
    float p;//price
    int m;//month
    int d;//day
    int t;//token
    scanf("%f %d %d %d", &p, &m, &d, &t);
    if(m == 11 && d == 11)
    {
        p *= 0.7;
    }
    if(m == 12 && d == 12)
    {
        p *= 0.8;
    }
    if(t == 1)
    {
        p -= 50;
    }
    if(p < 0)
    {
        p = 0;
    }
    printf("%.2f", p);
    return 0;
}
