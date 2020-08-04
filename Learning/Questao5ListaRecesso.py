print(" _____              _        _____             _               _       ");
print("|  _  |___ ___    _| |___   |   | |___ ___ ___|_|_____ ___ ___| |_ ___ ");
print("|     |   | . |  | . | -_|  | | | | .'|_ -|  _| |     | -_|   |  _| . |");
print("|__|__|_|_|___|  |___|___|  |_|___|__,|___|___|_|_|_|_|___|_|_|_| |___|");
anoAtual=int(input("Digite aqui o ano atual: "))
while(anoAtual<0):
    print("Ano atual inválido, tente novamente...\n")
    anoAtual = int(input("Digite aqui o ano atual: "))
idade=int(input("Digite aqui quantos anos você tem: "))
while(idade<0):
    print("Idade inválida, tente novamente...")
    idade = int(input("Digite aqui quantos anos você tem: "))

anoNascimento=anoAtual-idade;
print(f'Você nasceu em: {anoNascimento}');
input("Pressione ENTER para sair...")
