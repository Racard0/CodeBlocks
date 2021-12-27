#include <stdio.h>

//BC46
//int main(){
//    char i;
//    while(scanf("%c", &i) != EOF){
//        getchar();
//        if(i == 'a' || i == 'A' || i == 'E' || i == 'e' || i == 'I' || i == 'i' || i == 'o' || i == 'O' || i == 'u' || i == 'U'){
//            printf("Vowel\n");
//        }
//        else{
//            printf("Consonant\n");
//        }
//    }
//    return 0;
//}



//BC50
//int main(){
//    int t;
//    while(scanf("%d", &t) != -1){
//        getchar();
//        if(t > 0){
//            t = 1;
//            printf("%d\n", t);
//        }
//        else if(t == 0){
//            float t = 0.5;
//            printf("%.1f\n", t);
//        }
//        else{
//            t = 0;
//            printf("%d\n", t);
//        }
//    }
//    return 0;
//}



//BC51
//int main(){
//    int a,b,c;
//    while(scanf("%d %d %d", &a, &b, &c) != -1){
//    if(a+b>c && a+c>b && b+c>a){
//        if(a+b+c == a * 3){
//            printf("Equilateral triangle!\n");
//        }
//        else if(a == b || a == c || c == b){
//            printf("Isosceles triangle!\n");
//        }
//        else{
//            printf("Ordinary triangle!\n");
//        }
//    }
//    else{
//        printf("Not a triangle!\n");
//    }
//    }
//    return 0;
//}



//BC53
#include <math.h>
//int main(){
//    float a,b,c;
//    float gen1 = 0;
//    float gen2 = 0;
//    float i = 0;
//    while(scanf("%f %f %f", &a, &b, &c) != -1){
//        if(a == 0){
//            printf("Not quadratic equation\n");
//        }
//        else{
//            float bt = (b * b) - (4 *a * c);
//            if(bt == 0){
//                gen1 = -b / (2 * a);
//                printf("x1=x2=%.2f\n", gen1);
//            }
//            else if(bt > 0){
//                gen1 = ((-b) - sqrt(bt)) / (2 * a);
//                gen2 = ((-b) + sqrt(bt)) / (2 * a);
//                printf("x1=%.2f;x2=%.2f\n", gen1, gen2);
//            }
//            else{
//                gen1 = -b / (2 * a);
//                gen2 = sqrt(-bt) / (2 * a);
//                printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", gen1, gen2, gen1, gen2);
//            }
//        }
//    }
//    return 0;
//}


//int main(){
//    float a = 4;
//    printf("%f\n",sqrt(a));
//    return 0;
//}





//BC55
//int main(){
//    double a ,b;
//    char m;
//    while(scanf("%lf%c%lf", &a, &m, &b) != -1){
//            if(m != '+' && m != '-' && m != '*' && m != '/'){
//                printf("Invalid operation!\n");
//            }
//            else{
//                if(m == '+'){
//                    printf("%.4lf+%.4lf=%.4lf", a, b, a+b);
//                }
//                if(m == '-'){
//                    printf("%.4lf-%.4lf=%.4lf", a, b, a-b);
//                }
//                if(m == '*'){
//                    printf("%.4lf*%.4lf=%.4lf", a, b, a*b);
//                }
//                if(m == '/'){
//                    if(b == 0){
//                        printf("Wrong!Division by zero!\n");
//                    }
//                    else{
//                        printf("%.4lf/%.4lf=%.4lf", a, b, a/b);
//                    }
//                }
//            }
//    }
//    return 0;
//}


//int main()
//{
//    int ret = fmin(10000, 10000000);
//    printf("%d\n", ret);
//    return 0;
//}





//BC60
//int main(){
//    int n;
//    while(scanf("%d",&n) != -1){
//        for(int i = 0; i < n; i++){
//            for(int j = n - 1; j > i; j--){
//                printf("0");
//            }
//            for(int k = 0; k < i + 1; k++){
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}



//BC63
int main(){
    int n;
    int i, j, k;
    while(scanf("%d", &n) != -1){
        for(i = 0; i < n; i++){
            for(j = n; j > i; j--){
                printf(" ");
            }
            for(k = 0; k <= i; k++){
                printf("* ");
            }
            printf("\n");
        }
        for(int a = 0; a < n + 1; a++){
            printf("* ");
        }
        printf("\n");
        for(int b = 0; b < n; b++){
            for(int c = 0; c <= b; c++){
                printf(" ");
            }
            for(int d = n; d > b; d--){
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}
