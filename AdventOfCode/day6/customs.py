from collections import Counter

"""--- Part One ---"""


def num_of_yes():
    customs = [line.replace("\n", "") for line in open(
        "input.txt", "r").read().split("\n\n")]
    print(sum([len(set(group)) for group in customs]))


# num_of_yes()

"""--- Part Two ---"""


def count_same_yes():
    customs = [line.strip().split() for line in open(
        "input.txt", "r").read().split("\n\n")]
    print(sum([len([v for v in Counter("".join(g)).values() if v == len(g)])
               for g in customs]))


count_same_yes()
