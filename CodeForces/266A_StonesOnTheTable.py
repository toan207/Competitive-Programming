# https://codeforces.com/problemset/problem/266/A

n = int(input())
stones = input()

while 'RR' in stones or 'GG' in stones or 'BB' in stones:
    stones = stones.replace('RR','R')
    stones = stones.replace('GG','G')
    stones = stones.replace('BB','B')

print(n-len(stones))