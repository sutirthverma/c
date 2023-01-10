#include <stdio.h>



int searchInsert(int* nums, int numsSize, int target){
     for( int i = 0; i<numsSize; i++)
    {
        //If target not found
        if(target < nums[i])
        {
            for(int j=numsSize; j>i;j--)
                nums[++j] = nums[j];
            
            nums[i] = target;
            return i;
        }

        //If target is to be inserted at the last position
        if(target > nums[numsSize-1])
        {
            nums[numsSize] = target;
            numsSize++;
            return numsSize-1;
        }

        //If target found
        if(target == nums[i])
            return i;
    }
    return 0;
}

int main ()
{

  int arr[] = {1,2,5,6};
  int size = sizeof(arr)/sizeof(arr[0]);
  printf("%d\n",searchInsert(arr,size,6));
  return 0;
}
