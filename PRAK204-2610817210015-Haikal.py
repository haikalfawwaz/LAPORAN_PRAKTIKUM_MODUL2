import sys

angka_input = []

while len(angka_input) < 2:
    baris = sys.stdin.readline().split()
    angka_input.extend(baris)

jari_jari = float(angka_input[0])
tinggi = float(angka_input[1])

PI = 22 / 7
volume = PI * (jari_jari ** 2) * tinggi
luas = 2 * PI * jari_jari * (jari_jari + tinggi)
keliling = 2 * PI * jari_jari

print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")
