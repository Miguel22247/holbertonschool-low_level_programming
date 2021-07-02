#!/usr/bin/python3
"""Function that returns the island perimeter"""


def island_perimeter(grid):
    """Returns the perimeter of the island"""
    per = 0
    for row in range(0, len(grid)):
        for cell in range(0, len(grid[row])):
            if ((grid[row][cell-1] == 0) and (grid[row][cell+1] == 0)):
                per += 1
            if ((grid[row-1][cell] == 0) or (grid[row+1][cell] == 0)):
                per += 1

    per = per * 2
    return per
