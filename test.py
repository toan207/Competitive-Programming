# MOD = 1000000007
# def mul(A,B):
#     return [ [ sum(A[r][i]*B[i][c] for i in range(2))%MOD for c in range(2) ] for r in range(2) ]

# def exp(A,n):
#     if n==0: return [ [1,0], [0,1] ]
#     C = exp(A,n//2)
#     C = mul(C,C)
#     return mul(A,C) if n%2 else C

# n = int( input() )
# print( exp( [ [0,1], [1,1] ], n )[0][1] )

# nums = [8,1,2,2,3]
# sorted_list = sorted(nums)
# for i,j in enumerate(sorted_list):
#     print(i,j)

# n = [1,2,3,4,5]
# m = [6,7,8,9,10]
# for x,y in zip(n,m):
#     print(x,y)

# t = 3
# t1 = {1,2,5,6}
# print(t1 and t)

# def missingNumber(arr,k):
#     i = 0
#     r = 1
#     count = 0
#     arr.sort()
#     while count < k:
#         if r != arr[i]:
#             if count == k - 1:
#                 break
#             r += 1
#             count += 1
#         else:
#             r += 1
#             i += 1
#             i = min(len(arr)-1, i)
#     return r

# print(missingNumber([1,2,3,4,5],10))

# def checkPrime(n):
#     if n < 2:
#         return False
#     if n == 2 and n==3:
#         return True
#     if n%2 == 0 or n%3 == 0:
#         return False

#     for i in range (5,int(n**(1/2))+1,6):
#         if n%i==0:
#             return False
#     return True

# s = input()
# s1 = ''
# flag = True
# for i in s[::-1]:
#     if i == 3 or i == 4 or i == 7:
#         flag = False
#         break
#     elif i == 6:
#         s1+='9'
#     elif i == 9:
#         s1 += '6'
#     else:
#         s1 += i

# if flag:
#     if checkPrime(int(s)) and checkPrime(int(s1)):
#         print('yes')
#     else:
#         print('no')
# else:
#     print('no')

