# http://bigocoder.com/courses/GREEN14/GREEN14_LEC10/GREEN_L10P10/statement

class Apple:
    def __init__(self,w = 0, p = 0):
        self.w = w
        self.p = p

n = int(input())

chosenApple = Apple()
mark = 0

for i in range(n):
    w,p = map(int,input().split())

    if w>=chosenApple.w:
        if w==chosenApple.w:
            if p>chosenApple.p:
                chosenApple = Apple(w,p)
                mark = i
        else:
            chosenApple = Apple(w,p)
            mark = i

print(mark)