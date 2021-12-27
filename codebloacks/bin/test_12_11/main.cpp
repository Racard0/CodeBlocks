#include <stdio.h>
int binary_search(int arr[], int size, int target) //nums�����飬size������Ĵ�С��target����Ҫ���ҵ�ֵ
{
    int middle = 0;
    int left = 0;
    int right = size - 1;// ������target������ұյ������ڣ�[left, right]
    while (left <= right) {	//��left == rightʱ������[left, right]��Ȼ��Ч
        middle = (left + (right - left) / 2);//��ͬ�� (left + right) / 2����ֹ���
        if (arr[middle] > target) {
            right = middle - 1;	//target�������䣬����[left, middle - 1]
        } else if (arr[middle] < target) {
            left = middle + 1;	//target�������䣬����[middle + 1, right]
        } else {	//�Ȳ�����ߣ�Ҳ�����ұߣ��Ǿ����ҵ�����
            return middle;
        }
    }
    //û���ҵ�Ŀ��ֵ
    return -1;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;
    int flag = binary_search(arr, size, target);
    printf("%d \n", flag);
    return 0;
}



//����ջ
typedef struct
{
	DataType stack[StackSize];
	int top[2];
}SSeqStack;
//��ʼ��
void InitStack(SSeqStack *S)
{
	S->top[0]=0;
	S->top[1]=StackSize-1;
}
//��ջ
int PushStack(SeqStack *S,DataType e,int flag)
{
	if (S->top[0]==S->top[1])
	{
		printf("ջ����");
		return 0;
	}
	switch(flag)
	{
	case 0:
		S->stack[S->top[0]]=e;
		S->top[0]++;
		break;
	case 1:
		S->stack[S->top[1]]=e;
		S->top[1]--;
		break;
	default:
		return 0;

	}
	return 1;
}
//��ջ
int PopStack(SeqStack *S,DataType *e,int flag)
{
	switch(flag)
	{
	case 0:
		if (S->top[0]==0)
		{
			return 0;
		}
		S->top[0]--;
		*e=S->stack[S->top[0]];
		break;
	case 1:
		if (S->top[1]==StackSize-1)
		{
			return 0;
		}
		S->top[1]++;
		*e=S->stack[S->top[1]];
		break;
	default:
		return 0;
	}
	return 1;
}
