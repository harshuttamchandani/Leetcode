class Solution:
    def isPalindrome(self, x: int) -> bool:
        a=x
        if x<0:
            return False
        else:
            ans=0
            while(x!=0):
                rem=x%10
                ans=ans*10+rem
                x=x//10
        if ans==a:
            return True
        else:
            return False