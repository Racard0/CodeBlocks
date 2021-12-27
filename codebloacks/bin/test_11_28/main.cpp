#include <stdio.h>

//BC96
//int main(){
//    int n, num;
//    int ber = 0;
//    int ret = 1;
//    scanf("%d", &n);
//    for(int i = 0; i < n; i++){
//        scanf("%d ", &num);
//        if(num >= ber)
//            ber = num;
//        else
//            ret *= -1;
//    }
//    if(ret == 1)
//        printf("sorted");
//    else
//        printf("unsorted");
//    return 0;
//}


//BC97
int main(){
    int n, m, i;
    scanf("%d", &n);
    int arr[50];
    for(int i = 0; i < n; i++){
        scanf("%d ", &arr[i]);
    }
    scanf("%d", &m);
    for(i = n - 1; i >= 0; i--){
        if(arr[i] >arr[i - 1]){
            arr[i + 1] = arr[i];
        }
        else{
            arr[i] = m;
        }
    }
    if(i == 0){
        arr[0] = m;
    }
    for(i = 0; i < n + 1; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
