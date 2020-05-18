# https://codeforces.com/problemset/problem/489/B

boys = int(input())
boy_skill = list(map(int, input().split()))

girls = int(input())
girl_skill = list(map(int, input().split()))

boy_skill.sort()
girl_skill.sort()

i = 0
j = 0

count = 0

while i<len(boy_skill) and j<len(girl_skill):
    if boy_skill[i] - girl_skill[j] > 1:
        j += 1
    elif boy_skill[i] - girl_skill[j] < -1:
        i += 1
    else:
        count += 1
        j += 1
        i += 1

print(count)