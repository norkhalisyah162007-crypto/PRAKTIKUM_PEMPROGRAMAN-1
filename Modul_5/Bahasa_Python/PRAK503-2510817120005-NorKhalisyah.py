def maksimal(a, b):
    if a > b:
        return a
    else:
        return b

def minimal(a, b):
    if a < b:
        return a
    else:
        return b

maks = -100000
minim = 100000

bilangan = int(input("Masukkan jumlah: "))
nilai_list = list(map(int, input("Masukkan nilai: ").split()))

batas = 0
while batas < bilangan:
    nilai = nilai_list[batas]
    maks = maksimal(maks, nilai)
    minim = minimal(minim, nilai)
    batas += 1

print("Nilai max:", maks)
print("Nilai min:", minim)
