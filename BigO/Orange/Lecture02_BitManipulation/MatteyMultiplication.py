# https://v2.bigocoder.com/courses/41/lectures/545/problems/339?view=statement

t = int(input())

for test in range(t):
    n,m = map(int, input().split())
    arr = []

    temp = n*m

    while  temp>0:
        i = 0
        while n<<(i+1) <= temp:
            i += 1
        arr.append(i)
        temp -= n<<i
    
    for i in range(len(arr)):
        print('(' + str(n) + '<<' + str(arr[i]) + ')', end='')
        if i != len(arr) - 1:
            print(' + ', end='')
    print()