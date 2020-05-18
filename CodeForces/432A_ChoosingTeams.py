# https://codeforces.com/problemset/problem/432/A

n,k = list(map(int, input().split()))
y = list(map(int, input().split()))

mark = list(filter(lambda x: x + k <= 5,y))
print(len(mark)//3)