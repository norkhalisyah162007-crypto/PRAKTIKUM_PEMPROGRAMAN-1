print("Pilih Program")
print("1. Penjumlahan")
print("2. Pengurangan")
print("3. Perkalian")
print("4. Pembagian")
print("5. exit")

pilih = int(input("Masukkan Pilihan : "))

if 1 <= pilih <= 4:
        a = float(input("Masukkan nilai pertama : "))
        b = float(input("Masukkan nilai kedua : "))

        if pilih == 1: 
            hasil = a + b
        elif pilih == 2: 
            hasil = a - b
        elif pilih == 3: 
            hasil = a * b
        else: 
            hasil = a / b

        ops = ["penjumlahan", "pengurangan", "perkalian", "pembagian"]
        print(f"Hasil {ops[pilih - 1]} antara {a:.2f} dengan {b:.2f} adalah {hasil:.2f}")

elif pilih == 5:
        print("Terimakasih, telah menggunakan kalkulator NOR KHALISYAH")

else:
        print("Input anda salah, silahkan coba lagi")