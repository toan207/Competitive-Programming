s = input()
s1 = []
s2 = []

f = -1
if len(s)%2!=0:
    f = len(s)//2

for i in range(len(s)):
    if (i+1)%2==0:
        s2.append(s[i])
    else:
        s1.append(s[i])

s2 = s2[::-1]

ans = ''

for i in range(min(len(s1),len(s2))):
    ans += s1[i] + s2[i]

if f!=-1:
    ans += s1[f]
print(ans)