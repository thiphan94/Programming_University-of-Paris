def is_prime(a):
    for n in range(2, int(a / 2) + 1):
        if a % n == 0:
            return False
    return True
