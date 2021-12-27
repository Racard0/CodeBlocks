#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//BC76
//自己写
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
//    float num = 0;
//    for(int k = 1; k < 6; k++){
//        num = num + arr[k];
//    }
//    num /= 5;
//    printf("%.2f", num);
//    return 0;
//}


//老师写
//int main(){
//    int n;
//    int num = 0;
//    int max = 0;
//    int min = 100;
//    for(int i = 0; i < 7; i++){
//        scanf("%d ", &n);
//        num += n;
//        if(n > max)
//            max = n;
//        if(n < min)
//            min = n;
//    }
//    printf("%.2f", (num-max-min) / 5.00);
//    return 0;
//}


//BC54
//自己写
//int main(){
//    int year, month;
//    while(scanf("%d %d", &year, &month) != -1){
//    if(month == 1 || month == 3 || month == 5 ||month == 7 || month == 8 || month == 10 || month == 12)
//        printf("31");
//    else if(month != 2)
//        printf("30");
//    else
//        if(year % 4 == 0 || year % 400 == 0 && year % 100 != 0)
//            printf("29");
//        else
//            printf("28");
//    printf("\n");
//    }
//    return 0;
//}


//老师写
//int main(){
//    int year, month;
//    int days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
//    while(scanf("%d %d", &year, &month) != -1){
//        int day = days[month];
//        if(month == 2)
//            if((year % 4 ==0 && year % 100 != 0) || year % 400 == 0)
//                day += 1;
//        printf("%d\n", day);
//    }
//    return 0;
//}


//BC77
//暴力解法，插入后直接插入排序
//int main()
//{
//    int n;
//    scanf("%d\n", &n);
//    int arr[50] = {0};
//    for(int i = 0; i < n; i++){
//        scanf("%d ", &arr[i]);
//    }
//    int m;
//    scanf("%d", &m);
//    arr[n] = m;
//
//    //插排
//    for(int j = 0; j < n + 1; j++){
//        int key = arr[j];
//        while((j >= 1) && (arr[j - 1] > key)){
//            arr[j] = arr[j - 1];
//            j--;
//        }
//        arr[j] = key;
//    }
//
//    for(int l = 0; l < n + 1; l++){
//        printf("%d ", arr[l]);
//    }
//    return 0;
//}


//老师写的
int main()
{
    int n;
    scanf("%d", &n);
    int arr[50] = {0};
    int i;
    for(i = 0; i < n; i++){
        scanf("%d ", &arr[i]);
    }
    int m;
    scanf("%d", &m);
    for(i = n - 1; i >= 0; i--){
        if(arr[i] > m)
            arr[i + 1] = arr[i];
        else{
            arr[i + 1] = m;
            break;
        }
    }

    //考虑为第一个数的情况
    if(i < 0)
        arr[0] = m;
    for(i = 0; i < n + 1; i++)
        printf("%d ", arr[i]);
    return 0;
}
