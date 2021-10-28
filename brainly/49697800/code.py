import math

a = int(input("Digite o número A: "))
b = int(input("Digite o número B: "))

resultado = math.sqrt(a + b) + (math.sqrt(a) + math.sqrt(b))
print("Resultado: " + str(resultado))
print("Resultado é " + ("maior" if resultado > 100 else "menor") + " que 100.")
