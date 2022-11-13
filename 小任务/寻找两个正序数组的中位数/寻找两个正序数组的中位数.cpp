#include <iostream>
using namespace std;

double midNumber (int *nums1,int m,int *nums2,int n)
{
	int count,i = 0,j = 0,right,left;
	double mid;
	for (count=0;count<=(m+n)/2;count++)//循环(m+n)/2次，得到中位数（若m+n为偶数，得到中位数相邻的两个数） 
	{
        if (m==0&&n==1)//在leetcode提交时发现有长度为0的数组，因此该条件判断单独处理此情况 
        {
            right = nums2[n/2];
            break;
        }
        else if (n==0&&m==1)
        {
            right = nums1[m/2];
            break;
        }
        else if (n==0&&m>1)
        {
            right = nums1[m/2];
            left = nums1[m/2-1];
            break;
        }
        else if (m==0&&n>1)
        {
            right = nums2[n/2];
            left = nums2[n/2-1];
            break;
        }
		left = right;//存前一个right，以便m+n为偶数时使用
		if (nums1[i]<=nums2[j]&&i<m-1&&j<n-1)//两个数组比较，小的那个数组做++运算 
		{
			right = nums1[i];
			i++;
		}
		else if (nums1[i]>nums2[j]&&i<m-1&&j<n-1)
		{
			right = nums2[j];
			j++;
		}
		if (i==m-1&&j<n-1)//若其中一个数组碰到数组边界，就只用该数组的最后一位和另一个数组剩下的进行比较 
		{
			if (nums2[j]<nums1[m-1])
			{
				right = nums2[j];
				j++;
			}
			else if (nums2[j]==nums1[m-1])
			{
				right = nums1[m-1];
				j++;
			}
			else if (nums2[j]>nums1[m-1]&&nums2[j-1]<=nums1[m-1])
			{
				right = nums1[m-1];
				j++;
			}
			else
			{
				right = nums2[j];
				j++;
			}
		}
		else if (i<m-1&&j==n-1)
		{
			if (nums1[i]<nums2[j])
			{
				right = nums1[i];
				i++;
			}
			else if (nums1[i]==nums2[j])
			{
				right = nums2[j];
				i++;
			}
			else if (nums1[i]>nums2[n-1]&&nums1[i-1]<=nums2[n-1])
			{
				right = nums2[n-1];
				i++;
			}
			else
			{
				right = nums1[i];
				i++;
			}
		}
        if (i==m-1&&j==n-1)//若两个都碰到边界，则单独处理（但是还是有错误） 
		{
			if (nums1[i]<=nums2[j])
			{
				right = nums1[i];
				left = right;
                break;
			}
			else
			{
				right = nums2[j];
				left = right;
                break;
			}
		}
	}
	if ((m+n)%2)
	{
		return right;
	}
	else
	{
		return (left+right)/2.0;
	}
}

int main()
{
	int *nums1,*nums2;
	int m,n,i;
	cin>>m>>n;
	nums1 = new int[m];
	nums2 = new int[n];
	for (i=0;i<m;i++)
	{
		cin>>nums1[i];
	}
	for (i=0;i<n;i++)
	{
		cin>>nums2[i];
	}
	cout<<midNumber (nums1,m,nums2,n);
	return 0;
}
