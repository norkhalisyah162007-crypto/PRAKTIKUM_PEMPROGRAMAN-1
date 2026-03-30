a, b= map(int, input("Masukkan dua Angka: ").split())

kiri = a
kanan = b

if a < b:
    while kiri <= b and kanan >= a:
        print(kiri, kanan, end="")
        kiri += 1
        kanan -= 1
        if kiri <= b and kanan >= a:
            print(" - ", end="")

else:
    while kiri >= b and kanan <= a:
        print(kiri, kanan, end="")
        kiri -= 1
        kanan += 1
        if kiri >= b and kanan <= a:
            print(" - ", end="")