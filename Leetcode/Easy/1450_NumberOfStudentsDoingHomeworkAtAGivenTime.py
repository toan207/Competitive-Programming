# https://leetcode.com/problems/number-of-students-doing-homework-at-a-given-time/

class Solution:
    def busyStudent(self, startTime: List[int], endTime: List[int], queryTime: int) -> int:
        return len(list(filter(lambda x: x[0]<=queryTime<=x[1], zip(startTime, endTime))))