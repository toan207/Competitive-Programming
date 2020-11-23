def sol(n):
	if n == 1:
		return "FastestFinger"
	if n % 2 == 1 or n == 2:
		return "Ashishgup"
	for i in range(3, int(n**0.5) + 1):
		if n % i == 0:
			if i % 2 == 1 or (n // i) % 2 == 1:
				return "Ashishgup"
	return "FastestFinger"
t = int(input())
for _ in range(t):
	print(sol(int(input()))) 