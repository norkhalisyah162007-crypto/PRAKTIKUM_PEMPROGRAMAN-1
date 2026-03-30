a = int(input ("Masukkan Tiga Angka:\na = "))
b = int(input("b = "))
c = int(input("c = "))

if a <= b and a <= c:
        if b <= c:
            print(f"\nHasil= {a} {b} {c}")
        else:
            print(f"\nHasil= {a} {c} {b}")

elif b <= a and b <= c:
        if a <= c:
            print(f"\nHasil= {b} {a} {c}")
        else:
            print(f"\nHasil= {b} {c} {a}")

else:
        if a <= b:
            print(f"\nHasil= {c} {a} {b}")
        else:
            print(f"\nHasil= {c} {b} {a}")