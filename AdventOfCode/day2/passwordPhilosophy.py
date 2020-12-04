
def passwordPhilosophy1():
    count = 0
    while(True):
        password = input()
        if(password == "quit"):
            break
        password = password.split(" ")

        mini, maxi = password[0].split("-")
        mini = int(mini)
        maxi = int(maxi)

        wordToRepeat = password[1][0]

        num = password[2].count(wordToRepeat)

        if(num >= mini and num <= maxi):
            count += 1
    print(count)


def passwordPhilosophy2():
    count = 0
    while(True):
        s = input()
        if(s == "quit"):
            break
        inputs = s.split(" ")
        first_value, last_value = inputs[0].split("-")
        char = inputs[1].strip(":")
        string = inputs[2].strip("\n")
        first_value = int(first_value) - 1
        last_value = int(last_value) - 1

        if string[first_value] == char and string[last_value] == char:
            continue

        if string[first_value] == char or string[last_value] == char:
            count += 1
    print(count)


passwordPhilosophy2()
