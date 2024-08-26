class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        
        for i in range(len(nums)):
             if(nums[i]==0 and i!=len(nums)-1):
                j=i+1
                print(nums[j])
                while(nums[j]==0 and j<len(nums)-1):
                    j+=1
                nums[i]=nums[j]
                nums[j]=0
        return nums