def isPowerOfTwo(n: int) -> bool:
    a = 0
    while n > 2 ** a:
        a = a + 1
    
    if n == 2 ** a:
        return True
    else:
        return False


if __name__ == '__main__':
    import sys
    print(isPowerOfTwo(int(sys.argv[1])))