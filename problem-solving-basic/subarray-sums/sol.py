#!/bin/python3

import math
import os
import random
import re
import sys


#
# Complete the 'findSum' function below.
#
# The function is expected to return a LONG_INTEGER_ARRAY.
# The function accepts following parameters:
#  1. INTEGER_ARRAY numbers
#  2. 2D_INTEGER_ARRAY queries
#

def solution(numbers, queries):
    if not isinstance(numbers, list) and not isinstance(queries, list):
        return
    result = []
    total = 0
    for query in queries:
        if len(query) == 3:
            start = query[0]
            end = query[1]
            additional = query[2]
            selection = numbers[start-1:end]
            has_zeros = False
            for el in selection:
                if el == 0:
                    has_zeros = True
            total = sum(selection)
            if has_zeros:
                total += additional
            result.append(total)

    return result

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    numbers_count = int(input().strip())

    numbers = []

    for _ in range(numbers_count):
        numbers_item = int(input().strip())
        numbers.append(numbers_item)

    queries_rows = int(input().strip())
    queries_columns = int(input().strip())

    queries = []

    for _ in range(queries_rows):
        queries.append(list(map(int, input().rstrip().split())))

    result = findSum(numbers, queries)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
