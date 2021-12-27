#include <stdio.h>
int binary_search(int arr[], int size, int target) //nums是数组，size是数组的大小，target是需要查找的值
{
    int middle = 0;
    int left = 0;
    int right = size - 1;// 定义了target在左闭右闭的区间内，[left, right]
    while (left <= right) {	//当left == right时，区间[left, right]仍然有效
        middle = (left + (right - left) / 2);//等同于 (left + right) / 2，防止溢出
        if (arr[middle] > target) {
            right = middle - 1;	//target在左区间，所以[left, middle - 1]
        } else if (arr[middle] < target) {
            left = middle + 1;	//target在右区间，所以[middle + 1, right]
        } else {	//既不在左边，也不在右边，那就是找到答案了
            return middle;
        }
    }
    //没有找到目标值
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



//共享栈
typedef struct
{
	DataType stack[StackSize];
	int top[2];
}SSeqStack;
//初始化
void InitStack(SSeqStack *S)
{
	S->top[0]=0;
	S->top[1]=StackSize-1;
}
//进栈
int PushStack(SeqStack *S,DataType e,int flag)
{
	if (S->top[0]==S->top[1])
	{
		printf("栈已满");
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
//出栈
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
