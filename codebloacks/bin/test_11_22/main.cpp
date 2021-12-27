#include <stdio.h>


//BC65 - ¼ýÐÎÍ¼°¸
//int main(){
//    int n;
//    while(scanf("%d", &n) != -1){
//        for(int i = 0; i < n; i++){
//            for(int j = n; j > i; j--){
//                printf("  ");
//            }
//            for(int w = 0; w <= i; w++){
//                printf("*");
//            }
//            printf("\n");
//        }
//        for(int x = 0; x < n + 1; x++){
//            printf("*");
//        }
//        printf("\n");
//        for(int y = 0; y < n; y++){
//            for(int z = 0; z <= y; z++){
//                printf("  ");
//            }
//            for(int q = n; q > y; q--){
//                printf("*");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}



//BC69
int main(){
    int n;
    while(scanf("%d", &n) != -1){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i > 0 && i < n - 1 && j > 0 && j < n - 1){
                    printf("  ");
                }
                else{
                    printf("* ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
