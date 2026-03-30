nilai= int(input("Format Masukan : "))

if nilai == 0:
        print("Format Keluaran: nol")

elif 1 <= nilai< 10:
        print("Format Keluaran: Satuan")

elif 10 <= nilai < 20:  
        print("Format Keluaran: Belasan")

elif 20 <= nilai < 100:
        print("Format Keluaran: Puluhan")

else:
        print("Format Keluaran: Anda Menginput Melebihi Limit Bilangan")