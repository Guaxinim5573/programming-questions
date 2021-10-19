
try:
	anos = int(input("Diga a quantidade de anos: "))
	dias = anos * 365
	print(str(anos) + " anos = " + str(dias) + " dias.")
except ValueError:
		print("Você não especificou valor de anos válido.")
