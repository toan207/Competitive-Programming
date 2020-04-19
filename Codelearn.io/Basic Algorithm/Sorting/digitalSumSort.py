# Cho mảng số nguyên. Hãy sắp xếp chúng theo nguyên tắc:
# a đứng trước b nếu tổng các chữ số của a nhỏ hơn b
# Nếu hai số có tổng các chữ số bằng nhau, số nào nhỏ hơn sẽ đứng trước. 
# Ví dụ 4 và 13 có tổng chữ số bằng nhau, nhưng 4 < 13 nên 4 sẽ đứng trước 13 trong mảng kết quả

def digitalSumSort(a):
    mark = []
    for i in a:
        ans = 0
        while i!=0:
            ans += i%10
            i //= 10
        mark.append(ans)
    print(mark)
    for i in range(len(a)):
        for j in range(i+1,len(a)):
            if mark[i]>mark[j]:
                a[i],a[j] = a[j],a[i]
                mark[i],mark[j] = mark[j],mark[i]
            elif mark[i]==mark[j]:
                if a[i]>a[j]:
                    a[i],a[j] = a[j],a[i]
                    mark[i],mark[j] = mark[j],mark[i]
    return a

a = [13, 20, 7, 4]
digitalSumSort(a)