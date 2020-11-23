# https://v2.bigocoder.com/courses/41/lectures/545/problems/341?view=statement

t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    dishes = list()
    select = list()
    for i in range(n):
        dishes.append(input())
    
    for i in range(n):
        a = 0
        for j in range(k):
            if dishes[i][j] == '1':
                a = a | (1 << (k-1-j))
        select.append(a)
    
    result = k
    for i in range(1, 1 << k):
        correct = True
        for j in range(n):
            if (select[j] & i) == 0:
                correct = False
        if correct:
            count = 0
            mask = i
            
            while mask:
                if mask % 2 == 1:
                    count += 1
                mask //= 2
            result = min(result, count)
    print(result)