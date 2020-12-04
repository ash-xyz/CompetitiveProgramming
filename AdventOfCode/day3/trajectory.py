import numpy as np


def sled_trees(v_x, v_y):
    toboggan_path = [line for line in open(
        "day3.txt", "r").read().split("\n")[::v_y]]
    j = 0
    tree_count = 0
    s_x = len(toboggan_path[0])
    for i in range(len(toboggan_path)):
        if toboggan_path[i][j] == '#':
            tree_count += 1
        j = (j+v_x) % s_x

    return tree_count


trees_encountered = [sled_trees(v_x, v_y)
                     for v_x, v_y in [(1, 1), (3, 1), (5, 1), (7, 1), (1, 2)]]
print(np.prod(trees_encountered))
