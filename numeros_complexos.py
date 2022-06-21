import cmath

class numero_complexo:
    def __init__(self, real, imag):
        self.real = real
        self.imag = imag

    def numero_gerado(self):
        return complex(self.real, self.imag)

    def imprime(self):
        print(f"Parte real: {self.real}")
        print(f"Imagem: {self.imag}")
        print(f"Número gerado: {self.numero_gerado()}")

class operacoes:
    def __init__(self, lista):
        self.lista = lista

    def soma(self, lista):
        return sum(lista)

    def subtracao(self, lista):
        return lista[0] - lista[1] - lista[2]

    def multiplicacao(self, lista):
        return lista[0] * lista[1] * lista[2]

    def divisao(self, lista):
        return lista[0] / lista[1] / lista[2]

    def imprime(self, lista):
        print(f"Soma: {self.soma(lista)}")
        print(f"Subtração: {self.subtracao(lista)}")
        print(f"Multiplicação: {self.multiplicacao(lista)}")
        print(f"Divisão: {self.divisao(lista)}")

print("\nGerando primeiro número....\n")

complexo_1 = numero_complexo(
    int(input("Digite o número real: ")),
    int(input("Digite a imagem: "))
)

print("\nGerando segundo número....\n")

complexo_2 = numero_complexo(
    int(input("Digite o número real: ")),
    int(input("Digite a imagem: "))
)

print("\nGerando o terceiro número...\n")

complexo_3 = numero_complexo(
    int(input("Digite o número real: ")),
    int(input("Digite a imagem: "))
)

print("\nCalculando......\n")

n1 = complexo_1.numero_gerado()
n2 = complexo_2.numero_gerado()
n3 = complexo_3.numero_gerado()

lista_complexos = [ complexo_1, complexo_2, complexo_3 ]

print("\nNúmeros gerados\n")
for item, index in enumerate(lista_complexos):
    print(f"\n{item + 1}º número complexo :")
    index.imprime()

lista_gerados = [ n1, n2, n3 ]

operacoes_obj = operacoes(lista_gerados)

print("\nImprimindo operações...\n")

operacoes_obj.imprime(lista_gerados)