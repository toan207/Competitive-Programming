# https://codeforces.com/problemset/problem/236/A

name = input()
characters_list = []

for i in name:
    if i not in characters_list:
        characters_list.append(i)

if len(characters_list)%2==0:
    print('CHAT WITH HER!')
else:
    print('IGNORE HIM!')