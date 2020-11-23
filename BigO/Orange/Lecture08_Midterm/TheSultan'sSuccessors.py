# https://v2.bigocoder.com/courses/41/lectures/567/problems/421?view=statement

score = -1
_sum = 0

def btk(n):
    global _sum
    global score

    if n==8:
        score = max(score, _sum)
        return
    
    for i in range(8):
        if not col[i] and not md[n-i+7] and not ed[n+i]:
            col[i] = True
            md[n-i+7] = True
            ed[n+i] = True
            _sum += chessboard[n][i]

            btk(n+1)

            col[i] = False
            md[n-i+7] = False
            ed[n+i] = False
            _sum -= chessboard[n][i]
            

t = int(input())

col = [False] * 8
md = [False] * 15
ed = [False] * 15

chessboard = []

for _ in range(t):
    for i in range(8):
        row = list(map(int, input().split()))
        chessboard.append(row)
    
    score = -1
    _sum = 0
    
    btk(0)

    if score < 10000:
        print(' ' * (4-len(str(score))), score)
    else:
        print('%.5d' % score)