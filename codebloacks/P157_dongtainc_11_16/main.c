#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//P157
//��̬�ڴ�����

//1��
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
//����
//str����getmemory������ʱ����ֵ���ݣ�ʹ��getmemory�������β�p��str��һ����ʱ������
//��getmemory�����ڲ���̬����ռ�ĵ�ַ�������p�У�����Ӱ�����str��
//���Ե�getmemory��������֮��str��Ȼ��NULL������strcpy��ʧ�ܡ�
//��getmemory��������֮���β�p���٣��ǵĶ�̬���ٵ�100���ֽڴ����ڴ�й©���޷��ͷ�.

//�޸�
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

//�ķ�2
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


//2��
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
//����ջ�ռ�ĵ�ַ
//getmemory�����ڲ���������������ջ���ϴ�����
//���˺�����p����Ŀռ�ͻ����˲���ϵͳ�����صĵ�ַû��ʵ������
//���ͨ�����صĵ�ַȥ�����ڴ���ǷǷ����ʡ�


//3��
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
//û��free


//4��
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
//��ǰfree

//�޸ĺ�
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


//�������� - C99��
//�����ڴ��ͷţ������ڷ����ٶ�
//1��
//struct s
//{
//    int n;
//    int arr[];//��Сδ֪
//    //����
////    int arr[0];//����Ϊ��������
//};
//int main(){
////    printf("%d\n", sizeof(struct s));//4,�������鲻������
//
//    struct s *ps = (struct s*)malloc(sizeof(struct s) + 10 * sizeof(int));
//    ps->n = 10;
//    for(int i = 0; i < 10; i++){
//        ps->arr[i] = i;
//    }
//    //����
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
