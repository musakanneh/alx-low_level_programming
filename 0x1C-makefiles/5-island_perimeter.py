#!/usr/bin/python3
"""
Island Perimeter
"""

def island_perimeter(grid):
    """returns the perimeter of the island described in grid

    Args:
        grid(matrix): input grid

    Description:
        Traverse the land mass, and
        for the lake's nearest neighbor
        then return the total length

    """
    y = 0
    x = 0
    
    for row in range(1, len(grid) - 1):
            for col in range(1, len(grid[row]) - 1):
                if grid[row][col] == 1:
                    if grid[row][col - 1] == 0:
                        y += 1
                    if grid[row][col + 1] == 0:
                        y += 1
                    if grid[row - 1][col] == 0:
                        x += 1
                    if grid[row + 1][col] == 0:
                        x += 1
    return x + y
