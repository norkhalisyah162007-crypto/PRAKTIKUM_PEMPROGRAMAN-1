nilai=int(input ("Masukkan Nilai: "))
kelipatan =int(input ("Masukkan Kelipatan: "))
total1 = 0

for i in range (1, nilai + 1):
    total2 = 0
    rumus= ""
    for j in range (i, 0, -1):
        hasil = j * kelipatan
        total2 += hasil
        rumus += f"({j} * {kelipatan})"
        if j != 1:
            rumus += " + "
    
    print(f"{rumus} = {total2}")
    total1 += total2

print(total1)