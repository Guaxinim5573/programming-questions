
pares = []
impares = []

while True:
	try:
		numero = int(input("Digite um número: "))
		if numero == 0:
			break
		elif numero % 2 == 0:
			pares.append(numero)
		else:
			impares.append(numero)
	except ValueError:
		print("Número inválido.")
		continue

soma = 0
for numero in pares:
	soma += numero

produto = 1
for numero in impares:
	produto *= numero

print("Soma dos números pares: " + str(soma))
print("Produto dos números impares: " + str(produto))
