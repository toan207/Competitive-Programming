# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC03/BLUE_L03P02/statement

n,a,b = map(int,input().split())
h = list(map(int,input().split()))

h.sort()
print(h[n-a] - h[n-a-1])