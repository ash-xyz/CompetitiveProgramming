n = int(input())
for i in range(n):
    s = input()
    if s == "P=NP":
        print("skipped")
    else:
        a, b = s.split("+")
        a = int(a)
        b = int(b)
        print(a+b)
