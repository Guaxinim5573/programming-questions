
while True:
	try:
		numero = int(input("Digite um número: "))
		print("Tabuada de " + str(numero))
		for i in range(1,11):
			print(str(i) + ": " + str(numero * i))
	except ValueError:
		print("Número inválido.")
		continue
