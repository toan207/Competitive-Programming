# https://codeforces.com/problemset/problem/82/A

n = int(input())

person = ['Sheldon', 'Leonard', 'Penny', 'Rajesh', 'Howard']

i = 1

while n>=len(person)*i:
    n -= len(person)*i
    i *= 2

if n%i==0:
    print(person[(n//i)-1])
else:
    print(person[(n//i)])