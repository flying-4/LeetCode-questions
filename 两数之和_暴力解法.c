/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	//分配内存并判断内存是否分配成功
	int *result=(int*)malloc(2*sizeof(int));
	if(result==NULL)
	{
		//记录返回数组的长度
		*returnSize=0;
		return NULL;
	}
	
	//遍历并判断
	for(int i=0;i<numsSize;i++)
	{
		for(int j=i+1;j<numsSize;j++)
		{
			if(nums[i]+nums[j]==target){
				//记录下标
				result[0]=i;
				result[1]=j;
				*returnSize=2;
				return result;
			}
			
		}
		
	}
	
	//如果找不到，释放内存并结束
	free(result);
	*returnSize=0;
	return NULL;
}
