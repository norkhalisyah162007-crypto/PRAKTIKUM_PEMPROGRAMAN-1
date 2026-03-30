a = float(input("Masukkan nilai pertama: "))
b = float(input("Masukkan nilai kedua: "))

hasil = a + b

if a == int(a):
    print(f'Hasil dari penjumlahan nilai pertama "{a:.0f}" dan nilai kedua "{b:.1f}" adalah "{hasil:.2f}"')
else:
    print(f'Hasil dari penjumlahan nilai pertama "{a:.2f}" dan nilai kedua "{b:.1f}" adalah "{hasil:.2f}"')
