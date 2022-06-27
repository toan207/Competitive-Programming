# import math function
from math import inf, sin, cos, tan, asin, acos, atan, pi, sqrt
# import library
import matplotlib.pyplot as plt
import numpy as np

# Input
print('Input expression: ', end='')
exp = input()
print('Input [x1, x2]  : ', end='')
x1, x2 = map(float, input().split())
print('Input [y1, y2]  : ', end='')
y1, y2 = map(float, input().split())
tol = float(input('Tolerance       : '))

# Pre-process
# get corner right of rectangle
cnRightX = max(x1,x2)
cnRightY = max(y1,y2)
# get corner left of rectangle
cnLeftX = min(x1,x2)
cnLeftY = min(y1,y2)
# calculate f(x,y)
f = []
tend = []

# set m, n with m split follow Ox axis and n split follow Oy axis
# start m = n = 2
m = 2
n = 2

X = list()
Y = list()

# count loop to find the solution with allowed tolerance
loop = 0

pre = 0
ans = inf
deltaA = 0 # area of square (deltaX * deltaY)

# while loop to calculate integral until tolerance less than allowed tolerance and loop < 10
# loop < 10 because with loop == 10 then m = 2^11 and n == 2^11 (m, n start from 2). It's too large to calculate
while abs(ans - pre) > tol and loop < 10:
	tmp = 0
	
	# calculate deltaX, deltaY and deltaA
	deltaX = abs(x1-x2)/m
	deltaY = abs(y1-y2)/n
	deltaA = deltaX * deltaY
	
	# calculate x, y coordinates in upper right corner after split
	X = np.arange(cnLeftX + deltaX, cnRightX + deltaX, deltaX)
	Y = np.arange(cnLeftY + deltaY, cnRightY + deltaY, deltaY)

	for x in X:
		for y in Y:
			tmp += eval(exp)*deltaA
	
	pre = ans
	ans = tmp
	tend.append(ans)

	n *= 2
	m *= 2

	loop += 1

for x in X:
	for y in Y:
		if len(f):
			f.append(f[-1] + eval(exp)*deltaA)
		else:
			f.append(eval(exp)*deltaA)

# Print solution
print('Giá trị tích phân:', '%.4f' % f[-1])
if (ans != inf and pre != inf):
	print('Sai số là        :', '%.4f' % abs(ans-pre))
print('Số lần lặp       :', loop)
if (loop == 10):
	print('Không tìm được sai số nhỏ hơn!')

# Create histogram tendency of integral value
plt.title('Tendency of Integral Value')
plt.xlabel('Times')
plt.ylabel('Value')
plt.plot(tend)
plt.show()

# Create histogram Description of Integral Value
plt.title('Description of Integral Value Chart')
plt.xlabel('Times')
plt.ylabel('Value')
plt.plot(f)
plt.show()

# Time Complexity  : O( (n*m)^2 )
# Memory Complexity: O(n)

# Author: Bui Duc Toan