def BinarySearchFirst(arr, left, right, key):
    if left <= right:
        mid = (left + right)//2
        if (left == mid or arr[mid - 1] < key) and arr[mid] == key:
            return mid
        elif nums[mid] >= key:
            return BinarySearchFirst(arr, left, mid - 1, key)
        else:
            return BinarySearchFirst(arr, mid + 1, right, key)
    return -1

def BinarySearchFirst(left, right, key):
	while left <= right:
        mid = (right + left)//2
		if nums[mid] == key:
			mark = mid
		if (mid == left or key > nums[mid - 1]) and nums[mid]==key:
			return mid
		elif nums[mid] >= key:
			right = mid - 1
		else:
			left = mid + 1
	return -1