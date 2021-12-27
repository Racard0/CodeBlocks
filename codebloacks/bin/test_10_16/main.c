#include <stdio.h>
#include <stdlib.h>

//BC38
//int main(){
//    for(int i = 10000; i < 100000; i++){
//        if((i / 10000) * (i % 10000) + (i / 1000) * (i % 1000) + (i / 100) * (i % 100) + (i / 10) * (i % 10) == i){
//            printf("%d ", i);
//        }
//    }
//}


//BC39
int main(){
    int i;
    int a[50];
    scanf("%d", &i);
    for(int k = 0; k < i; k++){
        scanf("%d ", &a[k]);
    }
    int tmp;
    for(int n = 0; n < i; n++){
        for(int j = 0; j < i - 1; j++){
            if(a[j] < a[j + 1]){
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
    for(int l = 0; l < 5; l++){
        printf("%d ", a[l]);
    }
    return 0;
}
