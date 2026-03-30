data = input("Masukkan jari-jari dan tinggi tabung:\n ").split()

if len(data) == 1:
    data.append(input())  
r, t = map(float, data)

mpi = 22/7

volume = mpi * r * r * t
luas = 2 * mpi * r * (r + t)
keliling = 2 * mpi * r

print(f"Volume     = {volume:.2f}")
print(f"Luas       = {luas:.2f}")
print(f"Keliling   = {keliling:.2f}")
