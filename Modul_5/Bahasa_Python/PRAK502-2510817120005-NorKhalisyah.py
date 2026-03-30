def hitung(nilai1, nilai2):
    return nilai1 - nilai2

def mutlak (angka):
    if angka < 0:
        return -angka
    else:
        return angka

a = int(input("Masukkan niali x1: "))
b = int(input("Masukkan niali y1: "))
c = int(input("Masukkan niali x2: "))
d = int(input("Masukkan niali y2: "))

hasil = hitung(a, c) + hitung(b, d)
print(mutlak(hasil))