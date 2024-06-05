letras = input()
alfabeto = {}
ans = 0

for caractere in letras:
    if (caractere != '{' and caractere != '}' 
        and caractere != ' ' and caractere != ','
        and caractere not in alfabeto):
            ans += 1
            alfabeto[caractere] = 1

print(ans)
