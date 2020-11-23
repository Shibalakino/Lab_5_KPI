a = int(input("Enter a value of start point a = "))
b = int(input("Enter a value of end point b = "))
i = a
for i in range(a, b):
    s = 0
    for j in range(1, i):
        if i % j == 0:
            s += j
    if s == i:
        print(i)
