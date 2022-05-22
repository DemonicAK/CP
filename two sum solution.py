from typing import List


class Solution:
    def twoSum(self, nums :List[int], target :int):
        l=nums
        t=target
        for i in range (len(l)):
            for j in range(i+1,len(l)):
                if l[i]+l[j]==t:
                    return [i,j]
                else:
                    return 'error not applicable'
#LEET CODE QUESTION
ret=Solution().twoSum([3,4,5],7)
print(ret)


#DEMO FOR FIRST CLASS TYPE QUESTION

print(Solution().twoSum([3,6,5],'u'))


#SsassDDFFV
#r=Solution.twoSum(3,[5],5)
#print(r)
