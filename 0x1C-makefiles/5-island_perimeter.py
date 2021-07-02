#!/usr/bin/python3
"""Function that returns the island perimeter"""


def island_perimeter(grid):
    """Returns the perimeter of the island"""
    perimeter = 0
    for x in range(0, len(grid)):
        for y in range(0, len(grid[x])):
            if grid[x][y] == 1:
                if x <= 0:
                    perimeter += 1
                elif grid[x - 1][y] == 0:
                    perimeter += 1
                if x >= (len(grid) - 1):
                    perimeter += 1
                elif grid[x + 1][y] == 0:
                    perimeter += 1
                if y <= 0:
                    perimeter += 1
                elif grid[x][y - 1] == 0:
                    perimeter += 1
                if y >= (len(grid[x]) - 1):
                    perimeter += 1
                elif grid[x][y + 1] == 0:
                    perimeter += 1
    return perimeter
