#include<stdio.h>
#include<string.h>//strlen
#include<assert.h>//assert

//P92
//���Լ���
//����ģ��ʵ���ַ�����غ���

//my_strlen
//1��const
//2��assert
//�Լ�д

//size_t - unsigned int���޷�������
size_t my_strlen(const char* arr)
{
    assert(arr != NULL);
    //�ȼ�assert(arr);
    size_t count = 0;
    while(*arr != '\0')
    {
        arr++;
        count++;
    }
    return count;

}
int main()
{
    char arr[] = "0";
    scanf("%s", &arr);

    int ret = my_strlen(arr);
    printf("%d\n", ret);
//    printf("%d\n", strlen(arr));
    return 0;
}

