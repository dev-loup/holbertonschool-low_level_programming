#!/usr/bin/python3
""" Island module
    Functions:
        island_perimeter
"""


def island_perimeter(grid):
    """ Return the perimeter of grid island.
    """
    perimeter = 0
    for y, line in enumerate(grid):
        for x, chunk in enumerate(line):
            if (chunk == 1):
                counter = neighbors(grid, x, y)
                perimeter += (4 - counter)
    return perimeter


def neighbors(grid, x, y):
    """ Return the number of neighbors
    """

    counter = 0
    if (x > 0 and grid[y][x - 1] == 1):
        counter += 1
    if (x + 1 < len(grid[y]) and grid[y][x + 1] == 1):
        counter += 1
    if (y > 0 and grid[y - 1][x] == 1):
        counter += 1
    if (y + 1 < len(grid) and grid[y + 1][x] == 1):
        counter += 1
    return counter
