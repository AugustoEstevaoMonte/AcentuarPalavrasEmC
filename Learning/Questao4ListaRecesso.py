import os
print(" _____                 _             _        _____ _     _         _         ")
print("|   __|_ _ ___ ___ ___|_|___ ___ ___|_|___   | __  |_|___| |___ ___|_|___ ___ ")
print("|   __|_'_| . | -_|  _| | -_|   |  _| | .'|  | __ -| | . | | . | . | |  _| .'|")
print("|_____|_,_|  _|___|_| |_|___|_|_|___|_|__,|  |_____|_|___|_|___|_  |_|___|__,|")
print("          |_|                                                  |___|          ")
horasIniciais = int(input("Digite aqui as horas iniciais: \n"))
minutosIniciais = int(input("Digite aqui os minutos iniciais: \n"))
segundosIniciais = int(input("Digite aqui os segundos iniciais: \n"))
os.system("cls")
print(" _____                 _             _        _____ _     _         _         ")
print("|   __|_ _ ___ ___ ___|_|___ ___ ___|_|___   | __  |_|___| |___ ___|_|___ ___ ")
print("|   __|_'_| . | -_|  _| | -_|   |  _| | .'|  | __ -| | . | | . | . | |  _| .'|")
print("|_____|_,_|  _|___|_| |_|___|_|_|___|_|__,|  |_____|_|___|_|___|_  |_|___|__,|")
print("          |_|                                                  |___|          ")
horasFinais = int(input("Digite aqui as horas finais: \n"))
minutosFinais = int(input("Digite aqui os minutos finais: \n"))
segundosFinais = int(input("Digite aqui os segundos finais: \n"))

horasResultantes = horasFinais - horasIniciais
minutosResultantes = minutosFinais - minutosIniciais
segundosResultantes = segundosFinais - segundosIniciais

print(f'Horas: {horasResultantes} h\nMinutos: {minutosResultantes} min\nSegundos: {segundosResultantes} seg')
input("Pressione ENTER para continuar...\n")
