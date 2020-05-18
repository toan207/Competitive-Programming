# http://bigocoder.com/courses/OBLUE01/OBLUE01_LEC12/BLUE_L12P01/statement

def BinarySearchFirst(left, right, key):
	if left <= right:
		mid = (left + right)//2
		if (mid == left or key > nums[mid - 1]) and nums[mid]==key:
			return mid
		elif key > nums[mid]:
			return BinarySearchFirst(mid + 1, right, key)
		else:
			return BinarySearchFirst(left, mid - 1, key)
	return -1
case = 1

while True:
	n, q = map(int, input().split())

	if n == q == 0:
		break

	nums = []
	check = [0] * 10001

	for i in range(n):
		x = int(input())
		nums.append(x)
		check[x] = 1
	
	nums.sort()

	print('CASE# ' + str(case) + ':')
	case += 1
	for i in range(q):
		x = int(input())
		if check[x] != 1:
			print(str(x) + ' not found')
		else:
			print(str(x) + ' found at ' + str(BinarySearchFirst(0,n,x) + 1))