#include<stdlib.h>
#include<stdio.h>


struct cadastro {
	char nome[40];
	int idade;
	char sexo;
	char endereco[100];
	char telefone[15];
	float salario;
};
struct cadastro cad[100];
int Cadastros = 0;
void menu();
void quebraTabula();
void insereUmaLinha();
void insereDuasLinhas();
void tabula();
void cadastrar();
void visualizarCadastro();
float calculaDesconto(float sal);
void sair();
void limpaTela();
int main(void)
{
	menu();
	system("pause");
	return 0;
}
void quebraTabula()
{
	printf("\n\n\t");
}
void insereUmaLinha()
{
	printf("\n");
}
void insereDuasLinhas()
{
	printf("\n\n");
}
void tabula()
{
	printf("\t");
}
void sair()
{
	exit(1);
}
void limpaTela()
{
	system("cls");
}
void menu()
{
	limpaTela();
	int opc;
	printf("Escolha uma opcao:");
	quebraTabula();
	printf("1 - Para Cadastrar um novo funcionario");
	insereUmaLinha();
	tabula();
	printf("2 - Para visualizar o todos os cadastro");
	insereUmaLinha();
	tabula();
	printf("3 - Para Sair");
	insereDuasLinhas();
	printf("Opcao: ");
	scanf("%d", &opc);
	getchar();
	switch (opc) {
	case 1:
		cadastrar();
		break;
	case 2:
		visualizarCadastro();
		break;
	case 3: sair();
		break;
	default:
		menu();
	}
}
void cadastrar()
{
	char opc;
	int contador = 0;
	int qtd = 0;
	limpaTela();
	printf("Quantos funcionarios deseja cadastrar: ");
	scanf("%d", &qtd);
	getchar();
	if (qtd > 100 || qtd == 0)
	{
		insereDuasLinhas();
		printf("A quantidade deve estar entre 1 e 100. O limite %c 100 funcionarios.", 130);
		insereDuasLinhas();
		printf("Pressione uma tecla para inserir um novo valor...");
		system("pause > NULL");
		cadastrar();
	}
	else
	{
		Cadastros = qtd - 1;
		insereDuasLinhas();
		for (contador = 0; contador < qtd; contador++)
		{
			printf("Cadastrar o funcionario %d:", contador + 1);
			insereDuasLinhas();
			printf("Digite o nome: ");
			scanf("%s",&cad[contador].nome);
			printf("Digite a sua idade: ");
			scanf("%d", &cad[contador].idade);
			getchar();
			printf("Informe o sexo  (Apenas M para masculino ou F para feminino): ");
			scanf("%c", &cad[contador].sexo);
			getchar();
			printf("Digite o endereco: ");
			scanf("%d", &cad[contador].endereco);
			printf("Digite o telefone: ");
			scanf("%d", &cad[contador].telefone);
			printf("Informe o salario  (Apenas numeros. Ex.: 3500.00): ");
			scanf("%f", &cad[contador].salario);
			getchar();
			insereDuasLinhas();
		}
		printf("Cadastro realizado com sucesso! Deseja voltar ao menu? (s/n):");
		scanf("%c", &opc);
		getchar();
		if (opc == 's') {
			menu();
		}
		else {
			insereDuasLinhas();
			printf("Seu programa pode ser fechado!");
			insereDuasLinhas();
		}
	}
}
float calculaDesconto(float sal)
{
	return (sal * 0.93);
}
void visualizarCadastro()
{
	char opc;
	int contador;
	float comDesconto;
	limpaTela();
	if (Cadastros == 0)
	{
		printf("Nao ha cadastros realizados!");

		insereDuasLinhas();
	}
	else
	{
		printf("Todos os funcionarios cadastrados:");
		for (contador = 0; contador <= Cadastros; contador++)

		{
			comDesconto = calculaDesconto(cad[contador].salario);
			insereDuasLinhas();
			tabula();
			printf("Nome: %s", cad[contador].nome);
			insereUmaLinha();
			tabula();
			printf("Idade: %d", cad[contador].idade);
			insereUmaLinha();
			tabula();
			printf("Sexo: %c", cad[contador].sexo);
			insereUmaLinha();
			tabula();
			printf("Endereco: %s", cad[contador].endereco);
			insereUmaLinha();
			tabula();
			printf("Telefone: %s", cad[contador].telefone);
			insereUmaLinha();
			tabula();
			printf("Salario: R$ %.2f", cad[contador].salario);
			insereUmaLinha();
			tabula();
			printf("Salario com desconto: R$ %.2f", comDesconto);
			insereUmaLinha();
			insereDuasLinhas();
		}
	}
	printf("Deseja voltar ao menu? (s/n):");
	scanf("%c", &opc);
	getchar();
	if (opc == 's') {
		menu();
	}
	else {
		insereDuasLinhas();
		printf("Seu programa pode ser fechado!");
		insereDuasLinhas();
	}
}