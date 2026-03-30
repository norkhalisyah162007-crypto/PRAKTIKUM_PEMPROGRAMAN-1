n, simbol = input("Masukkan nilai dan simbol kelipatan: ").split()
n = int(n)

for i in range(1, 51):
    if i % n == 0:
        print(simbol, end=" ")
        
    else:
        print(i, end=" ")
    
    if i % 25 == 0:
        print()