#include<stdio.h>
#include<stdlib.h>
struct pasta
{
	int codigo;
	char nome[40];
	float peso, altura;
	struct pasta *proximo, *anterior;
};

struct pasta *inicio, *ultimo;

voidlistaligada (struct pasta *);

int menu();
void grava();
int abre ();
void cadastro (int);
void exclui ();
void lista ();
main ()
{
	staticintop, i=0;
	inicio=ultimo=NULL;
	for(;;)
	{
		op=menu ();
		switch (op)
		{
			case 1: cadastro(i);
			break;
			case 2: grava();
			break;
			case 3: i=abre();
			break;
			case 4: exclui();
			break;
			case 5: lista();
			break;
			case 6: exit(1);
			default:
				printf("\n\nEntre com uma opcao de 1 a 7\n\n");
				system("pause");
		}
	}
}
int menu()
{
	inti, v=1;
	system("cls");
	printf("\n\n\t\tMENU\n\n");
	printf("\t1. CADRASTRA DADOS\n\n");
	printf("\t2. GRAVA EM ARQUIVO\n\n");
	printf("\t3. ABRE ARQUIVO\n\n");
	printf("\t4. EXCLUI\n\n");
	printf("\t5. LISTA\n\n");
	printf("\t6. SAI\n\n");
	while(1)
	{
		printf("\nEntre com a opcao: ");
		fflush (stdin);
		v=scanf("%d", &i);
		if(!v)
		printf("\nEntrada errada\n");
		else break;
	}
	return i;
}
void cadastro (int i)
{
	struct pasta *p;
	system("cls");
	printf("\n\n\t\tCADASTRO\n\n");
	printf("\nTecle apenas ENTER sobre o campo nome para sair: \n\n");
	for(;;)
	{
		printf("\nNome %d:", i+1);
		fflush(stdin);
		p=(struct pasta *)malloc (sizeof(struct pasta));
		gets(p->nome);
		if(!p->nome[0])
		break;
		printf("\n peso: ");
		fflush(stdin);
		scanf("%f", &p->peso);
		printf("\n Altura");
		fflush(stdin);
		scanf("%f", &p->altura);
		i++;
		p->codigo=i;
		listaligada (p);
	}
}
void grava ()
{
	struct pasta *p;
	FILE *fp;
	int i=0;
	char arq[40];
	system("cls");
	printf("\n\n\t\tGRAVA EM ARQUIVO\n\n");
	printf("\n Entre com o nome do arquivo: ");
	fflush(stdin);
	gets(arq);
	if((fp=fopen(arq, "web"))==null)
	{
		printf("\n nao pode abrir o arquivo %s\n", arq);
		system("pause");
		return;
	}
	p=inicio;
	while(p != null)
	{
		fwrite(p, sizeof(struct pasta), 1, fp);
		p=p->proximo;
		i++;
	}
	fclose(fp);
	printf("\nForam gravados %d registros\n", i);
	system("pause");
}
int abre ()
{
	struct pasta *p;
	FILE *fp;
	int i=0;
	char arq [40];
	system("cls");
	printf("\n\n\t\tABRE DO ARQUIVO\n\n");
	printf("\n Entre com o nome do arquivo: ");
	fflush(stdin);
	gets(arq);
	if((fp=fopen(arq, "rb"))==null)
	{
		printf("\n nao pode abrir o arquivo %s\n", arq);
		system("pause");
		return;
	}
	p=inicio;
	while(p != null)
	{
		free (p);
		p=p->proximo;
	}
	inicio=ultimo=null;
	p=(struct pasta *) malloc(sizeof(struct pasta));
	while(fread(p, sizeof(struct pasta), 1, fp) !=0 )
	{
		listaligada (p);
		p=(struct pasta *)malloc(sizeof(struct pasta));
		i++;
	}
	fclose (fp);
	printf("\nForam lidos %d registros\n", i);
	system("pause");
	return (i);
}
voidlistaligada(struct pasta *p)
{
	if (inicio==NULL)
	{
		ultimo=p;
		inicio=p;
		p->proximo=null;
		p->anterior=null;
		return;
	} 
	ultimo->proximo=p;
	p->proximo=null;
	p->anterior=ultimo;
	ultimo=p;
}
void exclui ()
{
	struct pasta *p, *p1, *p2;
	int achou=0, codigo;
	system("cls");
	printf("\n\n\t\t EXCLUI\n\n");
	printf("\n entre com o codigo do registro a excluir\n\n");
	scanf("%d", &codigo);
	p=inicio;
	while (p != null)
	{
		if(p->codigo==codigo)
		{
			achou=1;
			if(p->anterior==null)
			if(p->proximo==null)
			{
				inicio=ultimo=null;
				free (p);
				break;
			}
			else
			{
				inicio=p->proximo;
				inicio->anterior=null;
				free (p);
				break;
			}
			else if(p->proximo==null)
			{
				ultimo=p->anterior;
				ultimo->proximo=null;
				free (p);
				break;
			}
			else
			{
				p1=p->anterior;
				p2=p->proximo;
				p1->proximo=p2;
				p2->anterior=p1;
				free (p);
				break;
			}
		}
		p=p->proximo;
	}
	if(achou==0)
	printf("\n codigo %d nao localizado\n", codigo);
	else printf("\n Sucesso. Registro codigo %d excluido \n", codigo);
	system("pause");
}
void lista()
{
	struct pasta *p;
	int codigo;
	system("cls");
	printf("\n\n\t\tLISTA\n\n");
	p=inicio;
	while(p != null)
	{
		printf("\n\t codigo:\t %d", p->codigo);
		printf("\n\t nome:\t\t %s", p->nome);
		printf("\n\t peso:\t\t %.2f", p->peso);
		printf("\n\t altura:\t %.2f", p->altura);
		printf("\n____________________________________________\n");
		p=p->proximo;
	}
	system("pause");
}
