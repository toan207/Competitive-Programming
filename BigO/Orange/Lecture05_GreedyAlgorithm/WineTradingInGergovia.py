# https://v2.bigocoder.com/courses/41/lectures/557/problems/393?view=statement


while True:
    try:
        _sum = 0
        ans = 0
        n = int(input())
        want = list(map(int, input().split()))
        for i in want:
            _sum += i
            ans += abs(_sum)
        print(ans)
    except:
        break