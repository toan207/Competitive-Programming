# https://codeforces.com/problemset/problem/144/A

n = int(input())
soldiers = list(map(int, input().split()))

highest_soldier = soldiers.index(max(soldiers))

count_time = 0

while highest_soldier != 0:
    soldiers[highest_soldier],soldiers[highest_soldier-1] = soldiers[highest_soldier-1],soldiers[highest_soldier]
    count_time += 1
    highest_soldier -= 1

temp_soldiers = soldiers[::-1]
shortest_soldier = temp_soldiers.index(min(temp_soldiers))

while shortest_soldier != 0:
    temp_soldiers[shortest_soldier],temp_soldiers[shortest_soldier-1] = temp_soldiers[shortest_soldier-1],temp_soldiers[shortest_soldier]
    count_time += 1
    shortest_soldier -= 1

print(count_time)