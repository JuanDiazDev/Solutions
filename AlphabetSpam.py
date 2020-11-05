import sys
import decimal

def lee_linea():
    return sys.stdin.readline().strip()

cadena = lee_linea()

espacios = 0.0
mayusculas = 0.0
minusculas = 0.0
simbolos = 0.0

for c in cadena:
    if c == "_":
        espacios += 1
    elif c.islower():
        minusculas += 1
    elif c.isupper():
        mayusculas += 1
    else:
        simbolos += 1

print(espacios/len(cadena))
print(minusculas/len(cadena))
print(mayusculas/len(cadena))
print(simbolos/len(cadena))
