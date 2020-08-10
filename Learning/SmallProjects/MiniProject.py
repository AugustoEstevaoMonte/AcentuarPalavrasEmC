import os
ERROR="The option insert is invalid, please try again..."
print(" _____             _                      _   _ ")
print("| __  |___ ___ ___| |_    _ _ ___ ___ ___| |_| |")
print("| __ -|  _| -_| .'| '_|  | | |   | . |  _| | . |")
print("|_____|_| |___|__,|_,_|  |___|_|_|___|_| |_|___|")
print("                                                ")
print("------------------------------------------------")
print("[1]- Começar o jogo")
print("[2]- Sair")
print("[3]- Créditos")
options=int(input())
while(options<1 or options>3):
    print(ERROR)
    print(" _____             _                      _   _ ")
    print("| __  |___ ___ ___| |_    _ _ ___ ___ ___| |_| |")
    print("| __ -|  _| -_| .'| '_|  | | |   | . |  _| | . |")
    print("|_____|_| |___|__,|_,_|  |___|_|_|___|_| |_|___|")
    print("                                                ")
    print("------------------------------------------------")
    print("[1]- Começar o jogo")
    print("[2]- Sair")
    print("[3]- Créditos")
    options=int(input())
if(options==1):
    print("OPCAO 1")
elif(options==2):
    print("Foi bom ter você por aqui, amigo(a)...")
    exit()

elif(options==3):
    os.system('cls')
    print(" _____             _   _    _____               ")
    print("|  |  |___ ___ ___| |_| |  |   __|___ ___ _ _ _ ")
    print("|  |  |   | . |  _| | . |  |__   |   | . | | | |")
    print("|_____|_|_|___|_| |_|___|  |_____|_|_|___|_____|")
    print("------------------------------------------------")
    print("Master-Jedi: Augusto Estevão Monte")
    print("Jedi: esperando o Augusto o codar...")
    print("------------------------------------------------")


