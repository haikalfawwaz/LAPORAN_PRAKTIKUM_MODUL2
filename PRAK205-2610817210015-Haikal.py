import sys
import math

angka_input = []

while len(angka_input) < 2:
    baris = sys.stdin.readline().split()
    angka_input.extend(baris)

tinggi = float(angka_input[0])
miring = float(angka_input[1])

alas =  math.sqrt((miring ** 2) - (tinggi ** 2))
keliling = tinggi + alas + miring
luas = 0.5 * alas * tinggi

print(f"")
print(f"Alas = {int(alas)} cm")
print(f"Tinggi = {int(tinggi)} cm")
print(f"Keliling = {int(keliling)} cm")
print(f"Luas = {int(luas)} cm^2")