# https://codeforces.com/problemset/problem/4/C

n = int(input())

account_dict = dict()

for i in range(n):
    item = input()
    if item not in account_dict.keys():
        account_dict[item] = 1
        print('OK')
    else:
        print(item, account_dict[item], sep='')
        account_dict[item] += 1