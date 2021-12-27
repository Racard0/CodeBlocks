#include<stdio.h>
//leetcode 27.移除元素

//给一数组nums和一个值val，需在原地移除所有数值等于val的元素
//并返回移除后数组的新长度。
//不使用格外数组空间，必须仅使用O(1)额外空间并原地修改输入数组。
//元素的顺序可以改变，不需要考虑数组中超出新长度后面的元素

//输入：[0,1,2,2,3,0,4,2], val=2
//输出：5，nums=[0,1,4,0,3]
//函数应返回新的长度为5，且nums前5个数应为，0，1，3，0，4

//思路一、一个个查找往前补齐
//时间复杂度为O(N^2)

//二、以空间换时间
//把不是val的数放在新数组，再把新数组拷贝回去
//时间复杂度O(N)

//三、双指针 - 最优解,就是覆盖前面
//时间复杂度O(1)
//1、src不是val就放到dst位置，然后src++,dst++
//2、src位置是val,src++

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

//lc 88.合并两个有序数组
//给两有序整数数组nums1,nums2，将nums2合并到nums1，使num1成为一个有序数组
//初始化nums1.nums2的元素的数量分别为m,n。可以假设nums1的空间大小等于m+n
//这阳保证有足够空间保存来自nums2的元素

//输入nums1=[1,2,3,0,0,0],m=3,nums2=[2,5,6],n=3
//输出[1,2,2,3,5,6]

//一、比较，从小到大放新数组里

//二、nums1,nums2从后往前放，取大的从后往前方
//最优解，时间复杂度0(M+N),空间复杂度0(1)
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
    //如果end1没完，不需要处理，因为就是在nums1里
    while(end2 >= 0)
    {
        nums1[end] = nums2[end2];
        end--;
        end2--;
    }
}

