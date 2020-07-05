n = int(input())
for i in range(n):
    s = input()
    if "Simon says " in s:
        print(s[10:])