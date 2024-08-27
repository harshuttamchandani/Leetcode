class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        l=[]
        for i in nums:
            if(i!=0):
                l.append(i)
        k=0
        while(k<len(l)):
            nums[k]=l[k]
            k+=1
        while(k<len(nums)):
            nums[k]=0
            k+=1
        return nums
        # for i in range(len(nums)):
        #      if(nums[i]==0 and i!=len(nums)-1):
        #         j=i+1
        #         while(nums[j]==0 and j<len(nums)-1):
        #             j+=1
        #         nums[i]=nums[j]
        #         nums[j]=0
        # return nums