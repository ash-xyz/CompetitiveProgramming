seating_locations = [line for line in open(
    "input.txt", "r").read().split("\n")]

# The purpose of everything in the int() is to convert it to binary string and then decimal
seat_ids = [((int(seat[:7].replace("F", "0").replace("B", "1"), 2)*8) +
             (int(seat[7:].replace("L", "0").replace("R", "1"), 2))) for seat in seating_locations]

"""--- Part One ---"""


def find_max_seat_id():
    print(max(seat_ids))


"""--- Part Two ---"""


def find_missing_id():
    print(
        f"Alternative: {[(seat + 1) for seat in seat_ids if (seat+1) not in seat_ids]}")
    print(
        f"Actual: {(((max(seat_ids) + min(seat_ids))//2)*(len(seat_ids)+1))-sum(seat_ids)}")


find_missing_id()
