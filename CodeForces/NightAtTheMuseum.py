# https://codeforces.com/problemset/problem/731/A

s = input()

a = ord('a')
z = ord('z')
mark = z - a + 1



times = 0
now = ord('a')

for i in s:
    code = ord(i)
    times += min(abs(code - now), abs(now-code+z-96 if code>=now else min(now-code,code-now+z-96)))
    now = ord(i)

print(times)