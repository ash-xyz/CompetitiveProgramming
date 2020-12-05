import re
passports = [line.replace('\n', ' ') for line in open(
    "input.txt", "r").read().split("\n\n")]

data_rules = {
    "byr": lambda x: 1920 <= int(x) <= 2002,
    "iyr": lambda x: 2010 <= int(x) <= 2020,
    "eyr": lambda x: 2020 <= int(x) <= 2030,
    "hgt": lambda x: ("in" in x and (59 <= int(x.replace("in", '')) <= 76)) or
    ("cm" in x and (150 <= int(x.replace("cm", '')) <= 193)),
    "hcl": lambda x: re.match(r'#[a-f0-9]{6}$', x),
    "ecl": lambda x: re.match(r'^amb$|^blu$|^brn$|^gry$|^grn$|^hzl$|^oth$', x),
    "pid": lambda x: re.match(r'^[0-9]{9}$', x)
}


def count_valid():
    """--- Part One ---"""
    count = 0
    for passport in passports:
        passport = passport.split()
        if len(passport) == 8 or (len(passport) == 7 and all('cid' not in i for i in passport)):
            count += 1
    print(count)


"""--- Part Two ---"""


def count_valid_two():
    count = 0
    for passport in passports:
        passport_details = {key.split(':')[0]: key.split(
            ':')[1] for key in passport.split(' ')}
        if all(data_rules[rule](passport_details.get(rule, "0")) for rule in data_rules.keys()) == True:
            count += 1
    print(count)


count_valid_two()
