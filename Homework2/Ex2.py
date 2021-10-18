# Nu Uyen Thi PHAN - M1 VMI
def is_prime(a):
    if type(a) != int:
        return False
    if a > 1:
        for n in range(2, int(a / 2) + 1):
            if a % n == 0:
                return False
        return True
    else:
        return False
