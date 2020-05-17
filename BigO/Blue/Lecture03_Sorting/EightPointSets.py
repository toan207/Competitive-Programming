# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC03/BLUE_L03P08

l = []
for i in range(8):
    x = list(map(int,input().split()))
    l.append(x)
l.sort()
if l[0][1] == l[3][1] == l[5][1] and l[0][1] != l[2][1] and l[2][1] == l[4][1] == l[7][1] and l[2][1] != l[1][1] and l[1][1] == l[6][1] and l[1][1] != l[0][1] and l[0][0] == l[1][0] == l[2][0] and l[2][0] != l[3][0] and l[3][0] == l[4][0] and l[4][0] != l[5][0] and l[5][0] == l[6][0] == l[7][0] and l[7][0] != l[0][0]:
    print ('respectable')
else:
    print('ugly')