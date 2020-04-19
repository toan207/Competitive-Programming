# https://codeforces.com/problemset/problem/996/A

money = int(input())

bills = 0

if money>=100:
    bills += money//100
    money -= bills*100

if money>=20:
    bills += money//20
    money -= (money//20)*20

if money>=10:
    bills += 1
    money -= 10

if money>=5:
    bills += 1
    money -= 5

print(bills + money)