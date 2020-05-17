# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC04/BLUE_L04P03/statement

while True:
    n = int(input())

    if n == 0:
        break

    arr = [i for i in range(1,n+1)]
    arr.reverse()

    mark = []

    while len(arr)>1:
        mark.append(arr.pop())
        temp = [arr[-1]]
        temp.extend(arr[:len(arr)-1])
        arr = temp

    print('Discarded cards:',end='')
    for i in range(n-1):
        print('',mark[i],end='')
        if i!=n-2:
            print(',',end='')
    print()
    print('Remaining card:',arr[0])