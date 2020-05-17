import sys
sys.setrecursionlimit(10000)

n = int(input())

numbers = [1]

def mul(number):
    if number >= len(numbers):
        numbers.append(numbers[len(numbers)-1] * len(numbers))
        return mul(number)
    return numbers[number]

print(mul(n))