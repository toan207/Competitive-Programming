# https://codeforces.com/problemset/problem/263/A

the_matrix = list()
row_index = 0
column_index = 0

for i in range(5):
    item = input().split()
    the_matrix.append(item)
    if '1' in the_matrix[i]:
        row_index = i
        column_index = the_matrix[i].index('1')
        
print(abs(2-row_index) + abs(2-column_index))