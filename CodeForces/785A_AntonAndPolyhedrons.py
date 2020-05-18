# https://codeforces.com/problemset/problem/785/A

n = int(input())

gemetric_faces = 0

geometric_list = ['Tetrahedron','Cube','Octahedron','Dodecahedron','Icosahedron']
value_list = [4,6,8,12,20]

for i in range(n):
    geomatric = input()
    gemetric_faces += value_list[ geometric_list.index(geomatric) ]

print(gemetric_faces)