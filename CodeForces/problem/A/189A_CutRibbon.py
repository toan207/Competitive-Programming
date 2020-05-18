# # https://codeforces.com/problemset/problem/189/A

# n = list(map(int, input().split()))

# mark_ans = 0
# mark_length = n[0]
# count_ribbon = 0

# length_condition = n[1::]
# length_condition.sort()

# i = 0

# _list = []

# while i<len(length_condition):
#     if mark_length>=length_condition[i]:
#         mark_length -= length_condition[i]
#         count_ribbon += 1

#     if mark_length in length_condition:
#         if count_ribbon+1 > mark_ans:
#             mark_ans = count_ribbon+1
#     if count_ribbon > mark_ans and mark_length == 0:
#             mark_ans = count_ribbon

#     if mark_length<length_condition[i]:
#         i += 1
#         mark_length = n[0]
#         count_ribbon = 0
#         _list.append(mark_ans)
#         mark_ans = 0

# print(max(_list))

# https://codeforces.com/problemset/problem/189/A

n = list(map(int, input().split()))

check_list = [0] * (n[0]+max(n[1::]))
check_list[n[1]] = check_list[n[2]] = check_list[n[3]] = 1

for i in range(min(n[1::]),n[0]+1):
    if i>n[1] and check_list[i-n[1]]>0 and check_list[i]<check_list[i-n[1]] + 1:
        check_list[i] = check_list[i-n[1]] + 1
    if i>n[2] and check_list[i-n[2]]>0 and check_list[i]<check_list[i-n[2]] + 1:
        check_list[i] = check_list[i-n[2]] + 1
    if i>n[3] and check_list[i-n[3]]>0 and check_list[i]<check_list[i-n[3]] + 1:
        check_list[i] = check_list[i-n[3]] + 1

print(check_list[n[0]])