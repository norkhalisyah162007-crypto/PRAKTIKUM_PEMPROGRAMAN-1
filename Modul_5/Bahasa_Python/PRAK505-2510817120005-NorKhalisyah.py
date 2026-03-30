def Biodata(tahunLahir, nama, asal):
    tahun_sekarang = 2020
    umur = tahun_sekarang - tahunLahir

    print(f"\nPerkenalkan Nama Saya: {nama}")
    print(f"Umur Saya: {umur} Tahun")
    print(f"Saya Adalah Angkatan: {tahun_sekarang}")
    print(f"Asal Saya dari: {asal}")

tahunLahir = int(input("Masukkan Tahun Lahir: "))
nama = input("Masukkan Nama: ")
asal = input("Masukkan Asal: ")

Biodata(tahunLahir, nama, asal)