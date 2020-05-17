n = int(input())
l = list(map(int,input().split()))

l.sort()

print(l[n//2] if n%2!=0 else (l[n//2] + l[n//2 - 1])/2)