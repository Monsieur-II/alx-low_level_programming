#!/usr/bin/python3
"""Defines a funtion island_perimeter"""


def island_perimeter(grid):
    """Returns the perimeter of the island in grid"""

    width = len(grid[0])
    height = len(grid)
    perim = 0

    for row in range(height):
        for col in range(width):
            if grid[row][col] == 1:
                perim += 4
                if col != 0 and grid[row][col - 1] == 1:
                    perim -= 2
                if row != 0 and grid[row - 1][col] == 1:
                    perim -= 2

    return perim
