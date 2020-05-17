# http://bigocoder.com/courses/GREEN14/GREEN14_LEC10/GREEN_L10P06/statement

class Paper:
    def __init__(self,color = 0, length = 0):
        self.color = color
        self.length = length
        self.count = 1

    def connect(self, p2):
        self.length += p2.length
        self.count += 1

n = int(input())

papers = []

for i in range(n):
    c,l = map(int,input().split())
    p = Paper(c,l)
    f = 1
    for j in range(len(papers)):
        if papers[j].color == c:
            papers[j].connect(p)
            f = 0
            break
    if f:
        papers.append(p)

print(len(papers))
papers.sort(key=lambda x: x.color)
for i in papers:
    print(i.color,i.length,i.count)