# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC04/BLUE_L04P02/statement

while True:
    n = int(input())
    
    if n == 0:
        break

    trucks = list(map(int,input().split()))

    start = 1
    stack = []
    i = 0

    while i<len(trucks):
        if trucks[i] == start:
            start += 1
            i += 1
        elif len(stack)>0 and stack[-1] == start:
            stack.pop()
            start += 1
        else:
            stack.append(trucks[i])
            i += 1

    while len(stack)>0 and stack[-1] == start:
        stack.pop()
        start += 1

    print('yes' if len(stack)==0 else 'no')