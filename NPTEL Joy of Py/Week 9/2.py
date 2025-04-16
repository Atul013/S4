'''
A positive integer m can be expressed as the sum of three squares if it is of the form p + q + r where p, q, r ≥ 0, and p, q, r are all perfect squares. For instance,
2 can be written as 0+1+1 but 7 cannot be expressed as the sum of three squares. The first numbers that cannot be expressed as the sum of three squares are 7, 15, 23, 28, 31, 39, 47, 55, 60, 63, 71, …(see Legendre's three-square theorem).

       Write a Python function threesquares(m) that takes an integer m as a parameter and returns True if m can be expressed as the sum of three squares and False otherwise.   (If m is not positive, your function should return False.)
       '''


def threesquares(m):
   
    if m <= 0:
        return False
    
   
    while m % 4 == 0:
        m //= 4
    if m % 8 == 7:
        return False
    
    
    for p in range(int(math.sqrt(m)) + 1):
        for q in range(p, int(math.sqrt(m - p * p)) + 1):
            r = m - p * p - q * q
            if r >= 0 and int(math.sqrt(r)) ** 2 == r:
                return True
    
    return False
import math
m = int(input())
print(threesquares(m))