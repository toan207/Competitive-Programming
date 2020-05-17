import sys
sys.setrecursionlimit(100005)

n = int(input())
s = input()

def symmetry(s,iter):
    if s[iter] != s[n - iter - 1]:
        return False
    if iter == n//2:
        return True
    return symmetry(s,iter + 1)

print('YES' if symmetry(s,0) else 'NO')