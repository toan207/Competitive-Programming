# https://codeforces.com/problemset/problem/750/A

n,k = list(map(int, input().split()))

solved_problem_count = 0
timeHeHas = 60*4 - k

i = 1

while i <= n and timeHeHas > 0:
    if timeHeHas - 5*i >= 0:
        timeHeHas -= 5*i
        i += 1
        solved_problem_count += 1
    else:
        break

print(solved_problem_count)