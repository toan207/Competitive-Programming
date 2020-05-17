# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC04/BLUE_L04P04/statement

case = 1

while True:
    p,c = map(int,input().split())

    if p == c == 0:
        break

    mark = []
    for j in range(1,min(p+1,c+1)):
        mark.append(j)
    mark.reverse()

    ans = []
    for i in range(c):
        n = input()
        
        if len(n)==1:
            ans.append(mark.pop())
            temp = [ans[len(ans)-1]]
            mark = temp + mark
        else:
            e = int(n.split()[1])
            
            if e not in mark:
                mark.append(e)
            elif mark[-1]!=e:
                pos = 0
                for i in range(len(mark)-1,-1,-1):
                    if mark[i]==e:
                        pos = i
                        break
                mark.append(mark[pos])
                mark = mark[:pos] + mark[pos+1:]
    print('Case ',case,':',sep='')
    for i in ans:
        print(i)
    case += 1