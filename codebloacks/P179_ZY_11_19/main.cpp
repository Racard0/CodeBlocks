#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>

//P179
//��̬�ڴ������ҵ

//1��ģ��ʵ��atoi - ���ַ���תΪ����
//int main()
//{
//    char *p = "-5678";
//    printf("%d\n", atoi(p));
//    return 0;
//}
//-5678

//ģ��
//enum State
//{
//    INVALID,
//    VALID
//};
//enum State state = INVALID;
//int my_atoi(const char *p)
//{
//    int flag = 1;
//    //��ָ��
//    if(NULL == p){
//        return 0;
//    }
//    //�����հ��ַ�
//    while(isspace(*p)){
//        p++;
//    }
//    //+��-�����
//    if(*p == '+'){
//        flag = 1;
//        p++;
//    }
//    else if(*p == '-'){
//        flag = -1;
//        p++;
//    }
//    //�����ַ�ת��
//    long long n = 0;
//    while(isdigit(*p)){
//        n = n * 10 + flag * (*p - '0');
//        if(n > INT_MAX || n < INT_MIN){
//            return 0;
//        }
//        p++;
//    }
//    //�����ַ����
//    if(*p == '\0'){
//        state = VALID;
//        return (int)n;
//    }
//    //�Ƿ��ַ����
//    else{
//        state = INVALID;
//        return (int)n;
//    }
//}
//int main()
//{
//    const char *p = "-24353151a";
//    int ret = my_atoi(p);
//    if(state == VALID){
//        printf("normal:%d\n", ret);
//    }
//    else{
//        printf("abnormal:%d\n", ret);
//    }
//    return 0;
//}




//P181
//1��һ��������ֻ������������ֻ����һ�Σ��������ǳ�������
//��дһ�������ҳ�������ֻ����һ�ΰ�����
//1 2 3 4 5 6 1 2 3 4
//5 6
//�Լ�д - �����㷨
//int cmp(const void *a, const void *b)
//{
//    return (*(int*)a - *(int*)b);
//}
//void finddouble(int arr[], int len)
//{
//    int tmp = 0;
//
//    for(int i = 0; i < len; i++){
//        for(int j = i + 1; j < len; j++){
//            if(arr[i] == arr[j]){
//                tmp = arr[i + 1];
//                arr[i + 1] = arr[j];
//                arr[j] = tmp;
//            }
//        }
//    }
//    qsort(arr, len, sizeof(int), cmp);
//    for(int m = len - 2; m < len; m++){
//        printf("%d ", arr[m]);
//    }
//}
//int main()
//{
//    int arr[] = {1, 2, 3, 4, 5, 6, 1, 2, 3, 4};
//    int len = sizeof(arr) / sizeof(arr[0]);
//    finddouble(arr, len);
//    return 0;
//}


//��ʦд
//����룬��Ϊ���飬 Ϊ0��Ϊ1һ��
//Ȼ�����鶼���ʣ�ľ��ǲ���ͬ��
void Find(int arr[], int len)
{
    //1.�������������
    int i = 0;
    int ret = 0;
    for(i = 0; i < len; i++){
        ret ^= arr[i];
    }
    //2.����ret��һλΪ1
    int pos = 0;
    for(i = 0; i < 32; i++){
        if(((ret >> i) & 1) == 1){
            pos = i;
            break;
        }
    }
    //3.�ӵ�λ���λ�ĵ�posλΪ1��Ϊ0�ķ�������һ��
    int num1 = 0;
    int num2 = 0;
    for(i = 0; i < len; i++){
        if((arr[i] >> pos) & 1 == 1){
            num1 ^= arr[i];
        }
        else{
            num2 ^= arr[i];
        }
    }
    printf("%d %d\n", num1, num2);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 1, 2, 3, 4};
    int len = sizeof(arr) / sizeof(arr[0]);
    Find(arr, len);
    return 0;
}
