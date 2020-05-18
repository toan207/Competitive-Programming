# https://codeforces.com/problemset/problem/518/A

s1 = input()
s2 = input()

ans = ''
mark = 0

for i in range(len(s1)):
    if s1[i]==s2[i]:
        ans += s1[i]
    else:
        ans += s1[i]
        mark = i
        break

if mark==len(s1)-1:
    ans = ans[:len(s1)-1] + chr(ord(ans[len(s1)-1])+1)
    if ans==s1 or ans==s2:
        print('No such string')
    else:
        print(ans)
else:
    if s1[mark+1]!='z':
        ans = ans[:mark] + s1[mark]
        ans += 'z' * (len(s1)-mark-1)
        if ans==s1 or ans==s2:
            print('No such string')
        else:
            print(ans)
    else:
        ans = ans[:mark] + s2[mark]
        ans += 'a' * (len(s1)-mark-1)
        if ans==s1 or ans==s2:
            print('No such string')
        else:
            print(ans)