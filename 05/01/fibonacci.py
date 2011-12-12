def fibonacci(n):
    if a[n - 1] == -1:
        fibonacci(n - 1)
    if a[n - 2] == -1:
        fibonacci(n - 2)
    a[n] = a[n - 1] + a[n - 2]

n = int(raw_input())
a = [0, 1]
for i in range(2, n + 1):
    a += [-1]
a[0] = 0
a[1] = 1
fibonacci(n)
print a[n]
