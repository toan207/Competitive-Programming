# https://codeforces.com/problemset/problem/489/C

m,s = list(map(int, input().split()))

ans_min = ''
ans_max = ''

if (s==0 and m>1) or s>m*9:
    print(-1,-1)
elif m==1 and s==0:
    print(0,0)
else:
    mark_value = s
    mark_length = m-2
    i = 1
    while len(ans_min) < 1:
        if (m-1)*9+i >= s:
            ans_min += str(i)
            mark_value -= i
            break
        else:
            i += 1
    
    i = 0
    while len(ans_min) < m:
        if mark_length*9+i >= mark_value:
            ans_min += str(i)
            mark_length -= 1
            mark_value -= i
        else:
            i += 1
    
    mark_value = s
    mark_length = m-2
    i = 9
    while len(ans_max) < 1:
        if i <= s:
            ans_max += str(i)
            mark_value -= i
            break
        else:
            i -= 1

    i = 9
    while len(ans_max) < m:
        if i <= mark_value:
            ans_max += str(i)
            mark_length -= 1
            mark_value -= i
        else:
            i -= 1
    
    print(ans_min, ans_max)