# Cho một mảng các xâu kí tự, hãy sắp xếp mảng tăng dần theo độ dài của xâu kí tự
# Nếu hai xâu kí tự có cùng độ dài, thứ tự của chúng giữ nguyên như thứ tự trong mảng ban đầu

def sortByLength(inputArray):
    groupByLength = [[] for j in range(101)]
    for i in inputArray:
        groupByLength[len(i)].append(i)
    ans = []
    for i in groupByLength:
        ans += i
    return ans

a = ["zz",   "",   "bb",   "ccc",   "cc"]
sortByLength(a)