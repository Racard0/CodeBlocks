#include <stdio.h>

//BC21
//int main()
//{
//    float a;
//    scanf("%f", &a);
//    int i = (int)a % 10;
//    printf("%d", i);
//    return 0;
//}


//BC23
//int main()
//{
//    int m;
//    scanf("%d", &m);
//    int s = m / 3600;
//    int f = m / 60 % 60;
//    int miao = m % 60;
//    printf("%d %d %d", s, f, miao);
//    return 0;
//}


//BC24
//int main()
//{
//    float yu, su, ying;
//    scanf("%f %f %f", &yu, &su, &ying);
//    float z = yu + su + ying;
//    float p = (yu + su + ying) / 3;
//    printf("%.2f %.2f", z, p);
//    return 0;
//}


//BC25
//int main()
//{
//    float kg, m;
//    scanf("%f %f", &kg, &m);
//    m = (m / 100)*(m / 100);
//    float BMI = kg / m;
//    printf("%.2f", BMI);
//    return 0;
//}


//BC26
#include <math.h>
//int main()
//{
//    float a, b, c;
//    scanf("%f %f %f", &a, &b, &c);
//    float circumference = a + b + c;
//    float p = circumference / 2;
//    float p2 = p * (p - a)*(p - b)*(p - c);
//    float area = sqrt(p2);
//    printf("circumference=%.2f area=%.2f", circumference, area);
//    return 0;
//}


//BC27
//int main()
//{
//    float r;
//    scanf("%f", &r);
//    float v = 4 / 3.0 * 3.1415926 * r * r * r;
//    printf("%.3f", v);
//    return 0;
//}


//BC28
int main(){
    char a;
    while(scanf("%c", &a) != -1){
        getchar();
        printf("%c\n", a - 32);
    }

    return 0;
}
