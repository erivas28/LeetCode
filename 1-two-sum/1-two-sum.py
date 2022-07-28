class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mymap = {}
        for i, comp in enumerate(nums):
            if target - comp in mymap:
                return [mymap[target - comp], i]
            else:    
                mymap[comp] = i
        return []
          