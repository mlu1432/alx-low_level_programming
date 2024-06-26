#!/usr/bin/python3
"""
Defines a function to calculate the perimeter of an island represented in a grid.
"""

def island_perimeter(grid):
    """
    Calculates the perimeter of an island in a grid.

    Args:
        grid (list of lists of int): The grid representing the island and water.

    Returns:
        int: The perimeter of the island.
    """
    # Initialize the variables
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if j > 0 and grid[i][j - 1] == 1:
                    edges += 1
                if i > 0 and grid[i - 1][j] == 1:
                    edges += 1

    return size * 4 - edges * 2
