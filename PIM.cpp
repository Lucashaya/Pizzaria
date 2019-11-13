// ConsoleApplication2.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include "stdio.h"
#include "math.h"
#include "windows.h"
#include "time.h"
#include "stdlib.h"
#include "conio.h"
#include "string.h"


void limpabuffer();

void CabecalhoInicial();

void CadastroFuncionario();

void CadastroPizza();

void CadastroCupom();

void Estoque();

void CadastroBebida();

void CadastroCliente();

void PedidoCliente();

void VerPedido();

void CancelarPedido();

void teste();

void SolicitarPedido();


int ponteiroLogin;
int main()
{
	system("title Pizzaria do Zeh");
	system("color 70");

	//system("MODE con cols=168 lines=100");
	/*keybd_event(VK_MENU, 0x36, 0, 0);
	keybd_event(VK_RETURN, 0x1C, 0, 0);
	keybd_event(VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0);
	keybd_event(VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);*/

	CabecalhoInicial();

	printf("Hora:%s \n", __TIME__);


	int opcao;
	int loginAdmin = 1020;
	int senhaAdmin = 1020;
	int loginFunc = 1010;
	int senhaFunc = 1010;


	int ponteiroSenha;


	printf("Entre com o usuario: ");
	scanf("%i", &ponteiroLogin);

	printf("Entre com a senha: ");
	scanf("%i", &ponteiroSenha);

	if (ponteiroLogin == loginAdmin && ponteiroSenha == senhaAdmin)
	{
		system("cls");
		system("title Pizzaria do Zeh: opcao");

		printf("  ================================================================================================\n");
		printf("||                              Pizzaria do Zeh Usuario: %i                                      ||\n", ponteiroLogin);
		printf("  ================================================================================================\n");

		printf("1 - Cadastro de funcionario.\n");
		printf("2 - Cadastro de Pizza.\n");
		printf("3 - Cadastro de Cliente.\n");
		printf("4 - Pedido.\n");

		printf("Entre com a opcao desejada: \n");
		scanf("%d", &opcao);

		switch (opcao)
		{
		case 1: CadastroFuncionario(); break;
		case 2: CadastroPizza(); break;
		case 3: CadastroCliente(); break;
		case 4: PedidoCliente(); break;
		default: main();
		}

	}

	else if (ponteiroLogin == loginFunc && ponteiroSenha == senhaFunc)
	{

		system("cls");
		system("title Pizzaria do Zeh: opcao");

		printf("  ================================================================================================\n");
		printf("||                              Pizzaria do Zeh Usuário: %i                                        ||\n", ponteiroLogin);
		printf("  ================================================================================================\n");

		printf("1 - Cadastro de Cliente.\n");
		printf("2 - Pedido.\n");

		printf("Entre com a opcao desejada: \n");
		scanf("%d", &opcao);

		switch (opcao)
		{
		case 1: CadastroCliente(); break;
		case 2: PedidoCliente(); break;
		default: teste();
		}
	}

	else
	{
		printf("Login ou usuario errado\n");
	}


	system("cls");
	printf("Obrigado por usar Pizzaria do Zeh \n");

	system("pause");
	return 0;
}

void limpabuffer()
{
	char c;
	while ((c = getchar()) != '\n' && c != EOF);
}

void CabecalhoInicial()
{
	printf("  ================================================================================================\n");
	printf("||                          Seja bem-vindo a Pizzaria do Zeh                                      ||\n");
	printf("  ================================================================================================\n");

}


void CadastroFuncionario()
{

	system("cls");
	system("title Pizzaria do Zeh: Cadastro de funcionario");

	printf("  ================================================================================================\n");
	printf("||                              Pizzaria do Zeh Usuário: %i                                        ||\n", ponteiroLogin);
	printf("  ================================================================================================\n");

	printf("Nome do funcionario \n");
	scanf("%d", &CadastroFuncionario);

	system("pause");

}

void CadastroPizza()
{
	system("cls");
	system("title Pizzaria do Zeh: Pizza");

	printf("  ================================================================================================\n");
	printf("||                              Pizzaria do Zeh Usuário: %i                                        ||\n", ponteiroLogin);
	printf("  ================================================================================================\n");
	printf("Entre com o sabor da Pizza \n");
	scanf("%d", &CadastroPizza);
	system("pause");

	
}

void CadastroCupom()
{
	system("cls");
	system("title Pizzaria do Zeh: Cupom");

	printf("  ================================================================================================\n");
	printf("||                              Pizzaria do Zeh Usuário: %i                                        ||\n", ponteiroLogin);
	printf("  ================================================================================================\n");
	printf("Em construcao de cupom \n");
	system("pause");

}

void Estoque()
{
	system("cls");
	system("title Pizzaria do Zeh: Cadastro");

	printf("  ================================================================================================\n");
	printf("||                              Pizzaria do Zeh Usuário: %i                                        ||\n", ponteiroLogin);
	printf("  ================================================================================================\n");
	printf("Em construcao do estoque \n");
	system("pause");

}

void CadastroBebida()
{
	system("cls");
	system("title Pizzaria do Zeh: Cadastro de bebida");

	printf("  ================================================================================================\n");
	printf("||                              Pizzaria do Zeh Usuário: %i                                        ||\n", ponteiroLogin);
	printf("  ================================================================================================\n");
	printf("Em construcao cadastro de bebida \n");
	system("pause");

}

void CadastroCliente()
{

	system("cls");
	system("title Pizzaria do Zeh: Cadastro de cliente");

	printf("  ================================================================================================\n");
	printf("||                              Pizzaria do Zeh Usuário: %i                                        ||\n", ponteiroLogin);
	printf("  ================================================================================================\n");
	printf("Entre com o nome do cliente \n");
	system("pause");
}

void PedidoCliente()
{

	system("cls");
	system("title Pizzaria do Zeh: Cadastro de pedido");

	printf("  ================================================================================================\n");
	printf("||                              Pizzaria do Zeh Usuário: %i                                        ||\n", ponteiroLogin);
	printf("  ================================================================================================\n");
	printf("Entre com o pedido do cliente \n");
	system("pause");
}

void VerPedido()
{

	system("cls");
	system("title Pizzaria do Zeh: Ver pedido");

	printf("  ================================================================================================\n");
	printf("||                              Pizzaria do Zeh Usuário: %i                                        ||\n", ponteiroLogin);
	printf("  ================================================================================================\n");
	printf("Digite o numero do pedido \n");
	system("pause");

}

void CancelarPedido()
{
	system("cls");
	system("title Pizzaria do Zeh: Cancelar pedido");

	printf("  ================================================================================================\n");
	printf("||                              Pizzaria do Zeh Usuário: %i                                        ||\n", ponteiroLogin);
	printf("  ================================================================================================\n");
	printf("Entre com o numero do pedido \n");
	system("pause");

}

void teste()
{
	system("cls");
	printf("Em construcao TESTE \n");
	system("pause");
}

void SolicitarPedido()
{
	system("cls");
	system("title Pizzaria do Zeh: Solicitar Pedido");

	printf("  ================================================================================================\n");
	printf("||                              Pizzaria do Zeh Usuário: %i                                        ||\n", ponteiroLogin);
	printf("  ================================================================================================\n");
	printf("Entre com a pizza desejada: \n");
	system("pause");

}