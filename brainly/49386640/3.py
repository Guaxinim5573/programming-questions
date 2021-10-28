import sys
import math

# Primeiro devemos criar a variável dos quartos.
# Como especificado no exercicio, usaremos lista de listas, também conhecido como Array 2D.
# Na lista:
#	* = Quarto indisponível
#	_ = Quarto vazio
#	G = GATO
#	C = CÃO
#	R = RATO
#	O = OSSO
#	Q = QUEIJO
# Como em cada fase os quartos mudam, essa variável mudará várias vezes.
# Por enquanto vamos deixar como 2 listas vazias e mudar no inicío de cada fase.
quartos = [[], []]
# Podemos acessar um quarto usando quartos[y][x], exemplo: quartos[0][1] se refere ao segundo quarto da primeira fileira.

# Mostra mensagem de gameover e encerra o programa.
def gameover():
	print("Você perdeu!")
	sys.exit(0)

# Mostra os quartos da variável "quartos"
def mostrar_quartos():
	for fileira in quartos:
		print(str(fileira))

# Como várias vezes perguntaremos ao usuário para alocar um animal,
# essa função simplifica isso.
# Parâmetro animal = Nome do animal, exemplo "RATO"
# Parâmetro nome = Nome do quarto, exemplo "R"
def alocar_animal(animal, nome):
	while True:
		try:
			posicao = int(input("Em qual posição quer alocar " + animal + "?"))
			if posicao > 8 or posicao < 1:
				print("Posição inválida.")
				continue
			elif quartos[math.floor(posicao / 5)][(posicao - 1) % 4]!= "_":
				print("Quarto indisponível ou ocupado.")
				continue
			else:
				quartos[math.floor(posicao / 5)][(posicao - 1) % 4] = nome
				break
		except ValueError:
			print("Número inválido.")
			continue

# Checa se o usuário perdeu
# retorna True se o usuário perdeu
# retorna False se o usuário não perdeu
def check_gameover():
	for fileira in quartos:
		for posicao in range(len(fileira)):
			esquerda = fileira[posicao - 1] if posicao - 1 > -1 else None
			animal = fileira[posicao]
			direita = fileira[posicao + 1] if posicao + 1 < 4 else None
			if animal == "R":
				if esquerda == "G" or direita == "G":
					return True
			elif animal == "C":
				if esquerda == "O" or direita == "O":
					return True
			elif animal == "G":
				if esquerda == "C" or direita == "C":
					return True
			elif animal == "Q":
				if esquerda == "R" or direita == "R":
					return True
print("     HOTEL DOS ANIMAIS")

print("Bem vindos a fase 1!")
print("Na Fase 1, o jogador deve alocar o RATO e o GATO na seguinte matriz que representa os quartos:")
quartos = [["*", "*", "_", "G"], ["R", "_", "*", "*"]]
mostrar_quartos()
alocar_animal("RATO", "R")
alocar_animal("GATO", "G")
if check_gameover():
	gameover()

print("Bem vindos a fase 2!")
print("Na Fase 2, o jogador deve alocar 2 cães e 1 osso nos seguintes quartos:")
quartos = [["_", "*", "*", "*"], ["*", "C", "_", "_"]]
mostrar_quartos()
alocar_animal("CÃO", "C")
alocar_animal("CÃO", "C")
alocar_animal("OSSO", "O")
if check_gameover():
	gameover()

print("Bem vindos a fase 3!")
print("Na Fase 3, o jogador deve alocar um GATO, um RATO e um OSSO nos seguintes quartos:")
quartos = [["_", "*", "*", "*"], ["_", "G", "_", "*"]]
mostrar_quartos()
alocar_animal("GATO", "G")
alocar_animal("RATO", "R")
alocar_animal("OSSO", "O")
if check_gameover():
	gameover()

print("Bem vindos a fase 4!")
print("Na Fase 4, o jogador deve alocar 2 QUEIJOS e 1 OSSO nos seguintes quartos:")
quartos = [["_", "_", "_", "*"], ["*", "R", "*", "*"]]
mostrar_quartos()
alocar_animal("QUEIJO", "Q")
alocar_animal("QUEIJO", "Q")
alocar_animal("OSSO", "O")
if check_gameover():
	gameover()

print("Parabéns! Você venceu!")
