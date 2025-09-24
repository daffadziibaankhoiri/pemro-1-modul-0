

nama = "Daffa Dziiba'an Khoiri"
nim = "2510817210005"
penentu_panjang = len(nama) > len(nim)
panjang_batas = 0

if(penentu_panjang):
    
    panjang_batas = len(nama) + 14
    
else: 
    panjang_batas = len(str(nim)) + 14


nama_line = f"#{nama:^{panjang_batas - 2}}#"
nim_line = f"#{nim:^{panjang_batas - 2}}#"

print("#" * panjang_batas)
print("\n#", " " * (panjang_batas-4), "#")
print(nama_line)
print(nim_line)
print("#", " " * (panjang_batas-4), "#")
print("#" * panjang_batas)