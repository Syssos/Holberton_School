#!/usr/bin/python3


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    p = 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1:
                p += 4
                if row > 0 and grid[row - 1][col] == 1:
                    p -= 2
                if col > 0 and grid[row][col - 1] == 1:
                    p -= 2
    return p
