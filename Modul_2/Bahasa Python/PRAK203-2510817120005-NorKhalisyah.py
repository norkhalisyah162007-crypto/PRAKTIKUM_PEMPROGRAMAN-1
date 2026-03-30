print("Masukkan 6 nilai")
data = input().split()

if len(data) == 2:
    data += input().split()  
    data += input().split()  

a, b, i, j, x, y = map(float, data)

hasil = (a - b) * (i / j) - (x + y)

print(f"{hasil:.3f}")
