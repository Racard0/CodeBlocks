#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//P157
//动态内存问题

//1、
//void getmemory(char *p){
//    p = (char*)malloc(100);
//}
//void test(void){
//    char *str = NULL;
//    getmemory(str);
//    strcpy(str, "hello world");
//    printf(str);
//}
//int main(){
//    test();
//    return 0;
//}
//崩溃
//str传给getmemory函数的时候是值传递，使用getmemory函数的形参p是str的一份临时拷贝。
//在getmemory函数内部动态申请空间的地址，存放在p中，不会影响外边str，
//所以当getmemory函数返回之后，str依然是NULL。所以strcpy会失败。
//当getmemory函数返回之后，形参p销毁，是的动态开辟的100个字节存在内存泄漏，无法释放.

//修改
//char* getmemory(char *p){
//    p = (char*)malloc(100);
//    return p;
//}
//void test(void){
//    char *str = NULL;
//    str = getmemory(str);
//    strcpy(str, "hello world!");
//    printf(str);
//    free(str);
//    str = NULL;
//}
//int main(){
//    test();
//    return 0;
//}

//改法2
//void getmemory(char **p){
//    *p = (char*)malloc(100);
//}
//void test(void){
//    char *str = NULL;
//    getmemory(&str);
//    strcpy(str, "hello world!!");
//    printf(str);
//    free(str);
//    str = NULL;
//}
//int main(){
//    test();
//    return 0;
//}


//2、
//char *getmemory(void){
//    char p[] = "hello world";
//    return p;
//}
//void test(void){
//    char *str = NULL;
//    str = getmemory();
//    printf(str);
//}
//int main(){
//    test();
//    return 0;
//}
//返回栈空间的地址
//getmemory函数内部创建的数组是在栈区上创建的
//出了函数，p数组的空间就还给了操作系统，返回的地址没有实际意义
//如果通过返回的地址去访问内存就是非法访问。


//3、
//void getmemory(char **p, int n){
//    *p = (char*)malloc(n);
//}
//void test(void){
//    char *str = NULL;
//    getmemory(&str, 100);
//    strcpy(str, "hello");
//    printf(str);
//}
//int main(){
//    test();
//    return 0;
//}
//没有free


//4、
//void test(void){
//    char *str = (char*)malloc(100);
//    strcpy(str, "hello");
//    free(str);
//    if(str != NULL){
//        strcpy(str, "world");
//        printf(str);
//    }
//}
//int main(){
//    test();
//    return 0;
//}
//提前free

//修改后
//void test(void){
//    char *str = (char*)malloc(100);
//    strcpy(str, "hello");
//    printf(str);
//    free(str);
//    str = NULL;
//    if(str != NULL){
//        strcpy(str, "world");
//        printf(str);
//    }
//}
//int main(){
//    test();
//    return 0;
//}


//柔性数组 - C99中
//方便内存释放，有利于访问速度
//1、
//struct s
//{
//    int n;
//    int arr[];//大小未知
//    //或者
////    int arr[0];//被称为柔性数组
//};
//int main(){
////    printf("%d\n", sizeof(struct s));//4,柔性数组不被计算
//
//    struct s *ps = (struct s*)malloc(sizeof(struct s) + 10 * sizeof(int));
//    ps->n = 10;
//    for(int i = 0; i < 10; i++){
//        ps->arr[i] = i;
//    }
//    //增加
//    struct s *ptr = (struct s*)realloc(ps, sizeof(struct s) + 20 * sizeof(int));
//    if(ptr != NULL){
//        ps = ptr;
//    }
//    return 0;
//}



































//int main(){
//    int arr[7];
//    for(int i = 0; i < 7; i++){
//        scanf("%d ", &arr[i]);
//    }
//    int i,j,tmp;
//    for(i = 0; i < 6; i++){
//        for(j = 0; j < 6 - i; j++){
//            if(arr[j] > arr[j + 1]){
//                tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
////    for (int k = 1; k < 6; k++)
////                printf("%d ", arr[k]);
//    int num = 0;
//    for(int k = 1; k < 6; k++){
//        num = num + arr[k];
//    }
//    num /= 5.00;
//    printf("%.2d", num);
//    return 0;
//}
