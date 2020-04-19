# https://codeforces.com/problemset/problem/337/A

n,m = list(map(int, input().split()))
f = list(map(int, input().split()))

f.sort()

begin_position_mark = 1
end_position_mark = n

begin_value_mark = f[0]
end_value_mark = f[n-1]

_min = end_value_mark - begin_value_mark

while end_position_mark < m:
    if f[end_position_mark] - f[begin_position_mark] < _min:
        _min = f[end_position_mark] - f[begin_position_mark]
    begin_position_mark += 1
    end_position_mark += 1

print(_min)