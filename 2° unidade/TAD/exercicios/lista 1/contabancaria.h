typedef struct contabancaria ContaBancaria;

//Aloca memoria para uma conta bancaria e inicializa os campos nome, numero da conta e saldo.
ContaBancaria *CriarConta(char *nome, int num, float valor);

//faz um deposito em uma conta e verifica se o valor do deposito é valido.
void Deposita(ContaBancaria *p, int num);

//realiza um saque em uma conta e verifica se o valor do saque é valido.
void Saca(ContaBancaria *clientes, int tam);

//realiza uma transferencia entre duas contas e verifica se o valor da transferencia é valido.
void Transfere(ContaBancaria *clientes, int tam);

//mostra o saldo de uma conta.
void Saldo(ContaBancaria *clientes, int tam);

//libera a memoria alocada para uma conta.
void ExcluiConta(ContaBancaria *clientes);

//mostra os dados de todas as contas.
void verClientes(ContaBancaria *clientes, int tam); 