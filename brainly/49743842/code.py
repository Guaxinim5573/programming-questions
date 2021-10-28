
while True:
	try:
		num1 = int(input("Digite o primeiro número: "))
		num2 = int(input("Digite o segundo número: "))
		operador = input("Digite o operador (+, -, *, /): ")
		if operador == "+":
			resultado = num1 + num2
		elif operador == "-":
			resultado = num1 - num2
		elif operador == "*":
			resultado = num1 * num2
		elif operador == "/":
			resultado = num1 / num2
		else:
			print("Operador inválido.")
			continue
		print("Resultado: " + str(resultado))
		break
	except ValueError:
		print("Número inválido.")
		continue
