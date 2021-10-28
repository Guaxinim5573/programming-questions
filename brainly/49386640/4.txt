from random import randrange

# Lista que guarda todas as incrições
inscricoes = []
# Lista que guarda todos os vouchers já usados
vouchers = []

# Retorna o número de um voucher aleatório que ainda não exista em inscricoes
def random_voucher():
	while True:
		voucher = randrange(100, 401)
		if voucher in vouchers:
			continue
		else:
			return voucher

# Cria uma nova inscrição
def nova_inscricao():
	nome = str(input("Digite seu nome: "))
	email = str(input("Digite seu email: "))
	while True:
		try:
			telefone = int(input("Digite seu telefone: "))
			break
		except ValueError:
			print("Telefone inválido.")
			continue
	curso = str(input("Digite seu curso: "))
	inscricoes.append({"voucher": random_voucher(), "nome": nome, "email": email, "telefone": telefone, "curso": curso})

# Mostra todas as inscricoes
def mostrar_inscricoes():
	print(("-"*20) + "Listra inscritos" + ("-"*20))
	for inscricao in inscricoes:
		print("voucher	:	" + str(inscricao["voucher"]))
		print("nome	:	" + inscricao["nome"])
		print("email	:	" + inscricao["email"])
		print("telefone:	" + str(inscricao["telefone"]))
		print("curso	:	" + inscricao["curso"])
		print("-"*20)

# Mostra o menu e pergunta uma opção
def menu():
	print(("*"*11) + "Menu" + ("*"*11))
	print("1 - Nova inscrição")
	print("2 - Visualizar inscrição")
	print("0 - Encerrar")

	while True:
		try:
			opcao = int(input("Opção escolhida: "))
			if opcao < 0 or opcao > 2:
				raise ValueError
			else:
				return opcao
		except ValueError:
			print("Erro: digite uma opção válida!")


while True:
	opcao = menu()
	if opcao == 1:
		nova_inscricao()
	elif opcao == 2:
		mostrar_inscricoes()
	elif opcao == 0:
		break
