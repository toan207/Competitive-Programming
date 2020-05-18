# https://codeforces.com/problemset/problem/581/A

a,b = list(map(int, input().split()))

differentSocksDays = min(a,b)
sameSocksDays = (max(a,b) - differentSocksDays)//2

print(differentSocksDays, sameSocksDays)