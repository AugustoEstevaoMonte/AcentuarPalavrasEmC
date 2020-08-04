dinheiro = float(input("Digite aqui quantos reais o cliente irá pagar: \n"));
desconto = dinheiro * 0.90
comissaoVendedor = desconto * 0.05
parcelado = dinheiro / 3;
comissaoVendor = parcelado * 0.05


print("=====================")
print(" _____     _         _          _                                      _       ")
print("|     |___| |_ ___ _| |___    _| |___    ___ ___ ___ ___ _____ ___ ___| |_ ___ ")
print("| | | | -_|  _| . | . | . |  | . | -_|  | . | .'| . | .'|     | -_|   |  _| . |")
print("|_|_|_|___|_| |___|___|___|  |___|___|  |  _|__,|_  |__,|_|_|_|___|_|_|_| |___|")
print("                                        |_|     |___|                          ")
print("[1]-A vista")
print("[2]-Parcelado")
print("=====================")
metodo = int(input())
if metodo == 1:
    print(f'O valor do desconto é: {desconto:.2f} R$\nA comissão para o vendedor é de: {comissaoVendedor:.2f} R$')
    input("Pressione ENTER para continuar...\n")
if metodo == 2:
    print(f'O valor parcelado é: {parcelado:.2f} R$\nA comissão para o vendedor é de: {comissaoVendor:.2f} R$')

    input("Pressione ENTER para continuar...\n");

