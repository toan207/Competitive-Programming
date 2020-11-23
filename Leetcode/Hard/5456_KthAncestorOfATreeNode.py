# https://leetcode.com/problems/kth-ancestor-of-a-tree-node/

class TreeAncestor:

    step = 15
    def __init__(self, n, A):
        A = dict(enumerate(A))
        jump = [A]
        for s in range(self.step):
            B = {}
            for i in A:
                if A[i] in A:
                    B[i] = A[A[i]]
            jump.append(B)
            A = B.copy()
        self.jump = jump

    def getKthAncestor(self, x, k):
        step = self.step
        while k > 0 and x > -1:
            if k >= 1 << step:
                x = self.jump[step].get(x, -1)
                k -= 1 << step
            else:
                step -= 1
        return x

# Your TreeAncestor object will be instantiated and called as such:
# obj = TreeAncestor(n, parent)
# param_1 = obj.getKthAncestor(node,k)