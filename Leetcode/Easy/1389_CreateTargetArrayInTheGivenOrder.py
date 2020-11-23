# https://leetcode.com/problems/create-target-array-in-the-given-order/

class Solution:
    def createTargetArray(self, nums: List[int], index: List[int]) -> List[int]:
        class Node:
            def __init__(self, data = None):
                self.data = data
                self.next = None

        class LinkedList:
            def __init__(self):
                self.head = None
            def insert(self, data, pos):
                p = Node(data)
                if self.head == None:
                    self.head = p
                else:
                    if pos == 0:
                        p.next = self.head
                        self.head = p
                    else:
                        temp = self.head
                        for i in range(pos-1):
                            temp = temp.next
                        if temp.next != None:
                            p.next = temp.next
                        temp.next = p
            def toList(self):
                p = self.head
                l = []
                while p != None:
                    l.append(p.data)
                    p = p.next
                return l

        root = LinkedList()
        n = len(nums)
        for i in range(n):
            root.insert(nums[i],index[i])
        ans = []
        temp = root.head
        return root.toList()