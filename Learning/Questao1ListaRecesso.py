taxaDiaria=40.00;
impostoDeRenda=0.89;
resultadoPagamento=taxaDiaria*impostoDeRenda;
dias=int(input("Digite aqui quantos dias foram trabalhados pelo encanador: \n"));
resultadoTot=dias*resultadoPagamento;
print(f'O encanador Trabalhou: {dias} dias\nA quantia total descontada no imposto de renda: {resultadoTot:.2f} R$');
input("Pressione ENTER para continuar...\n");