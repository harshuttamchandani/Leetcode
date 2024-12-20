class Solution:
    def reverse(self, x: int) -> int:
        ans=0
        n=abs(x)

        while(n!=0):
            rem=n%10
            ans=ans*10+rem
            n=n//10
        if ans>2**31-1 or ans<-1*2**31:
            return 0
        if x<0:
            return -1*ans
        else:
            return ans
            
            
        