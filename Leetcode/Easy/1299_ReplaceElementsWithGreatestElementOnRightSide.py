# https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/

class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        _max = -1
        n = len(arr)
        for i in range(n - 1, -1, -1):
            arr[i], _max = _max, max(arr[i], _max)
        return arr