#include <stdio.h>

//BC78
//int main(){
//    int n;
//    int arr[100] = {0};
//    int i = 0;
//    while(scanf("%d", &n) != -1){
//        for(i = 2; i <= n; i++){
//            arr[i-1] = i;
//        }
//        for(i = 2; i <= n; i++){//³ýÊý
//            for(int j = i; j < n; j++){//±»³ýÊý
//                if(arr[j] % i == 0){
//                    arr[j] = 0;
//                }
//            }
//        }
//    }
//    int count = -1;
//    for(i = 0; i < n; i++){
//        if(arr[i] == 0){
//            count++;
//        }
//        else{
//            printf("%d ", arr[i]);
//        }
//    }
//    printf("\n");
//    printf("%d", count);
//    return 0;
//}



//BC79
//int main(){
//    int n,m;
//    int a[100][100];
//    int b[100][100];
//    scanf("%d %d", &m, &n);
//    for(int i = 0; i < m; i++){
//        for(int j = 0; j < n; j++){
//            scanf("%d", &a[i][j]);
//        }
//    }
//    for(int i = 0; i < m; i++){
//        for(int j = 0; j < n; j++){
//            scanf("%d", &b[i][j]);
//        }
//    }
//    float count = 0;;
//    for(int i = 0; i < m; i++){
//        for(int j = 0; j < n; j++){
//            if(a[i][j] == b[i][j]){
//                count++;
//            }
//        }
//    }
//    printf("%.2f", count / (m*n) * 100);
//    return 0;
//}



//BC80
#include <string.h>
//int main(){
//    char admin[6], code[6];
//    char pc[6];
//    strcpy(pc, "admin");
//    while(scanf("%s %s", &admin, &code) != -1){
//        if(strcmp(admin, pc) == 0 && strcmp(code, pc) == 0){
//            printf("Login Success!\n");
//        }
//        else{
//            printf("Login Fail!\n");
//        }
//    }
//    return 0;
//}



//BC85
#include <stdlib.h>
#include <string.h>
#include<stdio.h>
int main()
{
    int count=0;
    char a[20];
    for(int i=1;i<2020;i++)
    {
        sprintf(a,"%d",i);
        for(int j=0;j<4;j++)
        {
            if(a[j] == '9')
            {
                count++;
                break;
            }
        }
    }
    printf("%d",count);
    return 0;
}
