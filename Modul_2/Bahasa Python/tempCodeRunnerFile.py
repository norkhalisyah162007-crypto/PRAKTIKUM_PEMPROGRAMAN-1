print("Masukkan tinggi dan alas segitiga")
import math
data = input().split()

if len(data) == 1:
    data.append(input())

A, B = map(float, data)

C = math.sqrt(B**2 - A**2)
keliling = A + B + C
luas = 0.5 * A * C

print(f"Alas = {C:.0f} cm")
print(f"Tinggi = {A:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2")
