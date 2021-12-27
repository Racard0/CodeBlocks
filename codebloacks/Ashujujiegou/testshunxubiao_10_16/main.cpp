#include<stdio.h>
//leetcode 27.�Ƴ�Ԫ��

//��һ����nums��һ��ֵval������ԭ���Ƴ�������ֵ����val��Ԫ��
//�������Ƴ���������³��ȡ�
//��ʹ�ø�������ռ䣬�����ʹ��O(1)����ռ䲢ԭ���޸��������顣
//Ԫ�ص�˳����Ըı䣬����Ҫ���������г����³��Ⱥ����Ԫ��

//���룺[0,1,2,2,3,0,4,2], val=2
//�����5��nums=[0,1,4,0,3]
//����Ӧ�����µĳ���Ϊ5����numsǰ5����ӦΪ��0��1��3��0��4

//˼·һ��һ����������ǰ����
//ʱ�临�Ӷ�ΪO(N^2)

//�����Կռ任ʱ��
//�Ѳ���val�������������飬�ٰ������鿽����ȥ
//ʱ�临�Ӷ�O(N)

//����˫ָ�� - ���Ž�,���Ǹ���ǰ��
//ʱ�临�Ӷ�O(1)
//1��src����val�ͷŵ�dstλ�ã�Ȼ��src++,dst++
//2��srcλ����val,src++

//int removeElement(int* nums, int numsSize, int val)
//{
//    int src = 0;
//    int dst = 0;
//    while(src < numsSize)
//    {
//        if(nums[src] != val)
//        {
//            nums[dst] = nums[src];
//            src++;
//            dst++;
//        }
//        else
//        {
//            src++;
//        }
//    }
//    return dst;
//}

//lc 88.�ϲ�������������
//����������������nums1,nums2����nums2�ϲ���nums1��ʹnum1��Ϊһ����������
//��ʼ��nums1.nums2��Ԫ�ص������ֱ�Ϊm,n�����Լ���nums1�Ŀռ��С����m+n
//������֤���㹻�ռ䱣������nums2��Ԫ��

//����nums1=[1,2,3,0,0,0],m=3,nums2=[2,5,6],n=3
//���[1,2,2,3,5,6]

//һ���Ƚϣ���С�������������

//����nums1,nums2�Ӻ���ǰ�ţ�ȡ��ĴӺ���ǰ��
//���Ž⣬ʱ�临�Ӷ�0(M+N),�ռ临�Ӷ�0(1)
void merge(int* nms1, int m, int* nums2, int n)
{
    int end1 = m - 1;
    int end2 = n - 1;
    int end = m + n - 1;

    while(end1 >= 0 && end2 >= 0)
    {
        if(nums1[end1] > nums2[end2])
        {
            nums1[end] = nums1[end1];
            end--;
            end1--;
        }
        else
        {
            nums1[end] = nums[end2];
            end--;
            end2--;
        }
    }
    //���end1û�꣬����Ҫ������Ϊ������nums1��
    while(end2 >= 0)
    {
        nums1[end] = nums2[end2];
        end--;
        end2--;
    }
}

