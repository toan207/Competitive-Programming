# https://codeforces.com/problemset/problem/443/A

s = input()
ans_list = []

for i in s:
    if i != '{' and i != '}' and i != ',' and i != ' ' and i not in ans_list:
        ans_list.append(i)

print(len(ans_list))