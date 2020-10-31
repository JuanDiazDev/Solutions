import sys

def get_string():
    return sys.stdin.readline().strip()

p = get_string()

for i in range(int(p)):
    password = get_string()
    ch = False #Caracter 
    lowr = False
    uppr = False
    repetido = False
    hayNumero = False
    anterior = False
    rules = 0
    for c in password:
        if c.islower():
            lowr = True
        if c.isupper():
            uppr = True
        if ('.' == c) or ('#' == c) or ('$' == c) or ('%' == c) or ('/'==c) or ('(' == c) or ('&' == c) or (')' == c):
            ch = True
        if c.isdigit():
            hayNumero = True
            if anterior:
                repetido = True
            else:
                anterior = True
        else:
            anterior = False

    if len(password) > 9:
        rules += 1
    if not repetido and hayNumero:
        rules += 1
    if uppr:
        rules+=1
    if lowr:
        rules+=1
    if ch:
        rules+=1
    if rules == 5:
        print("Assertion number #" + str(i+1) +": Strong")
    if rules == 4:
        print("Assertion number #" + str(i+1) +": Good")
    if rules == 3:
        print("Assertion number #" + str(i+1) +": Weak")
    if rules < 3:
        print("Assertion number #" + str(i+1) +": Rejected")
