#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>
#define T 20


void sucessorEantecessor(){
    int num, auxA=0, auxS=0;

    printf("Informe um numero e receba seu antecessor ");
    scanf("%d", &num);

    system("cls");
    auxA = num - 1;
    auxS = num + 1;

    printf("O antecessor de %d eh %d eh seu sucessor eh %d\n", num, auxA, auxS);
}

void soma(){
    int res=0, n, m, p;
    scanf("%d %d %d", &n, &m, &p);

    res = n + m + p;
    
    printf("Soma = %d\n", res);
}

float media(){
    float x, y, z, k, media=0.0;

    scanf("%f %f %f %f", &x, &y, &z, &k);

    media = (x + y + z + k)/4.0;

    printf("Media %.2f\n", media);

    return media;
}

void dataNasc(){
    int ano, idade, calcIdade;

    printf("Informe a sua idade: ");
    scanf("%d", &idade);

    printf("Informe o ano atual: ");
    scanf("%d", &ano);

    calcIdade = ano - idade;

    printf("Voce nasceu em %d \n", calcIdade);
}

void kmParaMs(){
    float k, m=0.0;

    printf("Infome sua velocidade em Km/h ");
    scanf("%f" , &k);

    m = k/36;

    printf("\n***VELOCIDADE CONVERTIDA DE KM/H PARA M/S***\n");
    printf("%.2f km/h eh igual %.2f m/s\n", k, m);
}

void celsiusParaFahrenheit(){
    double ce, fa=0.0;

    printf("Infome a temperatura atual em Celsius: ");
    scanf("%lf", &ce);

    fa = ce * (9.0/5.0) + 32;

    printf("\n%.2lf em Celsius = %.2lf Fahrenheit", ce, fa);
}

void grausParaRadianos(){
    double ra=0.0, gra;
    double const pi = 3.141592;

    printf("Informe o grau de um angulo: ");
    scanf("%lf", &gra);

    ra = gra * pi / 180;

    printf("\n***Graus para Radianos***\n");
    printf("%.2lf graus = %.2lf radianos", gra, ra);
}

void premioDistribuido(){
    double const premio = 780000.0;
    double g1 = (46.0/100.0) * premio;
    double g2 = (32.0/100.0) * premio;
    double g3 = (22.0/100.0) * premio;

    printf("Ganhador 1 = R$ %.2lf\nGanhador 2 = R$ %.2lf\nGanhador 3 = R$ %.2lf\n", g1, g2, g3);
}

void raioCirculo(){
    double raio, area=0.0;
    double const PI = 3.141592;

    printf("Informe o raio do circulo: ");
    scanf("%lf", &raio);

    area = PI * (raio * raio);

    printf("A area do circulo eh = %.lf cm^2", area);
}


void alturaRaioCilindro(){
    double altura, raio, volume=0.0;
    double const PI = 3.141592;

    printf("Informe a altura do cilindro: ");
    scanf("%lf", &altura);
    printf("Informe o radio do cilindro: ");
    scanf("%lf", &raio);

    volume = PI * (raio * raio) * altura;

    printf("Volume do cilindro eh = %.2lf cm^3", volume);
}

void valorHipotenusa(){
    double a, b, h;

    printf("Informe o valor do cateto(a) e do cateto(b): ");
    scanf("%lf %lf", &a, &b);

    h = sqrt((a*a)+(b*b));

    printf("Hipotenusa = %.2lf", h);
}

void converterMinusculoMaiuscula(){
    char letra, aux;

    scanf(" %c", &letra);
    aux = letra + 32;

    printf("%c", aux);
 
   //solução para o System("pause");
   //scanf("%*c");

}


int inverteValor(){
    int n, aux=0;

    printf("Informe um valor positivo: ");
    scanf("%d", &n);

    if(n >= 0){
        while(n != 0){
            aux = n % 10;
            n /= 10;
            printf("%d", aux);
        }
    }else if(n < 0){
        n *= -1;
        printf("-");
        do{
            aux = n % 10;
            n /= 10;
            printf("%d", aux);
        } while (n != 0);  
    }
    return aux;
}


void operacaoDeslocamento(){
    int n, r = 0, r2 = 0;
    
    scanf("%d", &n);

    r = n << 1;
    r2 = n >> 1;

    printf("%d x 2 = %d\n",n, r);
    printf("%d / 2 = %d", n, r2);
}

void complementoBitaBit(){
    unsigned int x, r=0;
    scanf("%d", &x);

    r = ~x;
    printf("Complemento bit a bit de ~ %d = %d", x, r);
}

void deslocamento(){
    int x, y, r=0, l=0;

    scanf("%d %d", &x, &y);

    r = x << y;
    l = x >> y;

    printf(">> = %d\n<< = %d", r, l);
}

void operacoesLogicaBitaBit(){
    int x, y, r1=0, r2=0, r3=0;

    scanf("%d %d", &x, &y);
    r1 = x & y;
    r2 = x | y;
    r3 = x ^ y;

    fflush(stdin); 
    printf("& = %d\n| = %d\n^ = %d", r1, r2, r3);

}

void operadorTernario(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    (num == 10) ? printf("Numero igual 10") : printf("Numero diferente de 10");

    //index = (index == 3) ? 0 : ++index;
}

void verificaOmaiorNumero(){
    int x, y;

    scanf("%d %d", &x, &y);

    if(x > y){
        printf("x: %d e maior que y: %d", x, y);
    }else if(y > x){
        printf("y: %d e maior que x: %d", y, x);
    }else{
        printf("Numero iguais!");
    }
}


void parOUimpar(){
    int num;

    scanf("%d", &num);

    if(num % 2 == 0){
        printf("%d eh par", num);
    }else{
        printf("%d eh impar", num);
    }
}


void salarioEverificaEmprestimo(){
    double salario, prestacao, vinteporcentoSalario;

    printf("Informe seu salario: ");
    scanf("%lf", &salario);

    printf("Informe o valor da prestacao: ");
    scanf("%lf", &prestacao);


    vinteporcentoSalario = salario * 20/100;


    if(prestacao > vinteporcentoSalario){
        printf("Emprestimo nao concedido\n");
    }else{
        printf("Emprestimo concedido");
    }
}


void verificaNumeroEhPositivo(){
    double numero;

    scanf("Informe um numero: ");
    scanf("%lf", &numero);

    double raiz, quadrado;

    if(numero > 0){
        raiz = sqrt(numero);
        quadrado = numero * numero;

        printf("O quadrado de %.2lf eh %.2lf\n", numero, quadrado);
        printf("A raiz quadrada de %.2lf eh %.2lf\n", numero, raiz);
    }
}



void indiceCorporal(){
    double altura, pesohomem, pesomulher;
    char sexo;

    printf("Informe sua altura: ");
    scanf("%lf", &altura);

    printf("Informe seu sexo: feminino[f] ou masculino[m]\n");
    scanf(" %c", &sexo);

    pesohomem = (72.7 * altura) - 58;
    pesomulher = (62.1 * altura) - 44.7;

    if(sexo == 'm' && pesohomem){
        printf("Seu peso ideal eh %.3lf kg", pesohomem);
    }else if(sexo == 'f' && pesomulher){
        printf("Seu peso ideal eh %.3lf kg", pesomulher);
    }
}


void impostoPorEstado(){
    double valor;
    char estado[3];

    printf("Informe o valor: ");
    scanf("%lf", &valor);

    printf("Informe o estado: ");
    scanf(" %s", estado);


    if((!strcmp(estado, "mg")) == 1){
        double mg = valor * 7/100;
        printf("Taxa de R$ %.2lf", mg);
    }else if((!strcmp(estado, "sp")) == 1){
        double sp = valor * 12/100;
        printf("Taxa de R$ %.2lf", sp);
    }else if((!strcmp(estado, "rj")) == 1){
        double rj = valor * 15/100;
        printf("Taxa de R$ %.2lf", rj);
    }else if((!strcmp(estado, "ms")) == 1){
        double ms = valor * 8/100;
        printf("Taxa de R$ %.2lf", ms);
    }else{
        printf("Estado invalido!");
    }
}


void categoriaNadador(){
    int idade;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if(idade >= 5 && idade <= 7){
        printf("Categoria: Infantil A\n");
    }else if(idade >= 8 && idade <= 10){
        printf("Categoria: Infantil B\n");
    }else if(idade >= 11 && idade <= 13){
        printf("Categoria: Juvenil A\n");
    }else if(idade >= 14 && idade <= 17){
        printf("Categoria: Juvenil B\n");
    }else if(idade > 18){
        printf("Categoria: Senior\n");
    }else{
        printf("Ainda nao esta apto ao esporte\n");
    }
}


void categoriaPesoAltura(){
    float peso, altura;

    printf("Informe seu peso: ");
    scanf("%f", &peso);
    printf("Informe sua altura: ");
    scanf("%f", &altura);

    if(altura < 1.20 && peso == 60){
        printf("A");
    }else if(altura < 1.20 && peso > 60 && peso <= 90){
        printf("D");
    }else if(altura < 1.20 && peso > 90){
        printf("G");
    }else if(altura >= 1.20 && altura <= 1.70 && peso == 60.0){
        printf("B");
    }else if(altura >= 1.20 && altura <= 1.70 && peso > 60 && peso <= 90.0){
        printf("E");
    }else if(altura >= 1.20 && altura <= 70.0 && peso > 90){
        printf("H");
    }else if(altura > 1.70 && peso == 60.0){
        printf("C");
    }else if(altura > 1.70 &&  peso > 60 && peso <= 90.0){
        printf("F");
    }else if(altura > 1.70 && peso > 90.0){
        printf("I");
    }
}

void tiposDeMedia(){
    int x=0, y=0, z=0, op=0;


    printf("Informe 3 valores inteiros positivos: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("Informe qual tipo de media ira realizar:\n[1]GEOMETRICA\n[2]PONDERADA\n[3]HARMONICA\n[4]ARITMETICA\n");
    scanf("%d", &op);

    switch (op){
    case 1:{
    //O uso de {} no case, um salto condicional não pode pular uma declaração de variável no moesmo escopo.
    //Com o uso das chaves criamos um novo escopo, e a variável declarada existe apenas dentro desse par de chaves, portanto ela pode ser "pulada" por um salto condicional.
        int media = x * y * z;
        printf("Media Geometrica = %d", media);
    }
        break;
    case 2:{
        int media = x * y * z;
        printf("Media Ponderada = %d", media);
    }
        break;
    case 3:{
        int  media = 1/((1/x) + (1/y) + (1/z));
        printf("Media Harmonica = %d", media);
    }
        break;
    case 4:{
        int media = (x + y + z)/3;
        printf("Media Aritmetica = %d", media);
    }
        break;

    default:
        printf("Opcao Invalida!");
        break;
    }
}

void mesesDoAno(){
    int mes;

    printf("Informe um numero de 1 a 12: ");    
    scanf("%d", &mes);

    switch (mes){
        case 1:
            printf("Janeiro"); break;
        case 2:
            printf("Fevereiro"); break;
        case 3:
            printf("Marco"); break;
        case 4:
            printf("Abril"); break;
        case 5:
            printf("Maio"); break;
        case 6:
            printf("Junho"); break;
        case 7:
            printf("Julho"); break;
        case 8:
            printf("Agosto"); break;
        case 9:
            printf("Setembro"); break;
        case 10:
            printf("Outubro"); break;
        case 11:
            printf("Novembro"); break;
        case 12:
            printf("Dezembro"); break;
        default:
            printf("Mes invalido!"); break;
    }
}

void diasDaSemana(){
    int dias;

    printf("Informe um numero de 1 a 7: ");
    scanf("%d", &dias);

    switch (dias){
    case 1:
        printf("DOMINGO");
        break;
    case 2:
        printf("SEGUNDA");
        break;
    case 3:
        printf("TERCA");
        break;
    case 4:
        printf("QUARTA");
        break;
    case 5:
        printf("QUINTA");
        break;
    case 6:
        printf("SEXTA");
        break;
    case 7:
        printf("SABADO");
        break;
    default:
        printf("OPCAO INVALIDA!");
        break;
    }
}



void operacoesBasicas(){
    int op;
    float x, y, resultado;

    printf("Informe dois valores: ");
    scanf("%f %f", &x, &y);

    system("cls");

    printf("\n[1] Adicao\n[2] Subtracao\n[3] Divisao\n[4] Multiplicacao\n");
    scanf("%d", &op);


    switch (op){
        case 1: 
            resultado =  x + y;
            printf("%.2f ", resultado);
            break;
         case 2:
            resultado =  x - y;
            printf("%.2f ", resultado);
            break;
         case 3:
            resultado =  x / y;
            printf("%.2f ", resultado);
            break;
         case 4:
            resultado = x * y;
            printf("%.2f ", resultado);
            break;
        default:
            printf("Opcao invalida");
            break;
    }
}


void verficaNumDivisivelpor3e5(){
    int x;

    printf("Informe um valor inteiro: ");
    scanf("%d", &x);

    if(!((x % 5 == 0) && (x % 3 == 0))){//verifica se são divisiveis mas não simultaneamente pelos dois.
        printf("%d e divisivel ", x);
    }else{
        printf("%d divide simultaneamente por 5 e 3", x);
    }
}


void equacaoSegundoGrau(){
    float a, b, c, x1, x2, delta;

    printf("f(x) = ax^2 + bx + c = 0\n");
    printf("a = "); scanf("%f", &a);
    printf("b = "); scanf("%f", &b);
    printf("c = "); scanf("%f", &c);

    system("cls");
    printf("f(x) = %2.fx^2 + %2.fx + %2.f\n", a, b, c);
    delta = b * b - 4 * a * c;

    if(delta < 0){
        printf("DELTA = %.2f, Nao existe raizes reais", delta);
    }else if(delta == 0){
        x1 = -b / (2*a);
        printf("DELTA = %2.f\nx1 = %2.f, Raiz Unica", delta, x1);
    }else{
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("DELTA = %2.f\nx1 = %.2f\nx2 = %.2f", delta, x1, x2);
    }
}


void condicaoComCaractere(){
    char c;

    for(c = 'A'; c <= 'Z'; c++){
        printf("Letra = %c\n", c);
    }
}


void utilizandoGoto(){
    int i, j, k;
    
    for(i = 0; i < 5; i++)  
        for(j = 0; j < 5; j++)
            for(k = 0; k < 5; k++)
                if(i == 2 && j == 3 && k == 1)
                    goto fim;
                else
                    printf("Posicao [%d, %d, %d]\n", i, j, k);
                    
    fim:
    printf("Fim do programa");
}


void naturais0ateN(){
    int n;

    printf("Informe um valor: ");
    scanf("%d", &n);

    for(int i = 0; i <= n; i++){
        if(n > 0){
            printf("%d\n", i);
        }
        
    }
}

void naturais0ateNdescrecente(){
    int n;

    printf("Informe um valor: ");
    scanf("%d", &n);

    for(int i = 0; n > i; n--){
        if(n > 0){
            printf("%d\n", n);
        }
    }
}

void naturais0ateNimpares(){
    int n;

    printf("Informe um valor: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        if(!(i % 2 == 0)){
            printf("%d\n", i);
        }
    }
}


void cincoPrimeirosmultiplosDe3(){
    
    int aux;
    for(int i = 0; i <= 5; i++){
        aux = i * 3;

        if(aux > 0){
            printf("%d\n", aux);
        }
    }
}

void soma50primeiroNpares(){
    int aux=0;
    int cont = 0, soma = 0;

    
        for(int i = 0; i <= 100; i++){
            if(i % 2 == 0){
                aux = aux + i;
            }
        }
        printf("Soma %d", aux);
    

        while(cont < 50){
            cont++;
            soma += cont * 2;
       }

    //outra forma
    for(int i = 0; i <= 50; i++){
        soma = soma + (i * 2);
    }

    printf("%d", soma);
}


void contagemRegressiva10a0(){

    printf("Contagem regressivao em...\n");
    for(int i = 10; i >= 0; i--){
        printf("%d\n", i);
    }
    printf("FIM\n");
}

void some10entradas(){
    float valores[11];
    float tam = sizeof(valores)/sizeof(int);//ou sizeof(valores[0]); O VETOR TEM UM TOTAL DE 44 BYTES / 4 BYTES  = 11
    float soma;

    //float byte = sizeof(int);
    //printf("%f", byte);

    for(int i = 1; i < tam; i++){
        scanf("%f ", &valores[i]);
        soma += valores[i];
    }

    printf("total = %.2f", soma);
}


void triangulo(){
    for(int i = 5; i > 0; i--){
        for(int j = 0; j < i; j++){
            printf("* ");
        }printf("\n");
    }
}



void somaGauss(){
    int n, pivo=0;
    
    scanf("%d", &n);

    for(int i = 1; i < n; i++){
        pivo = n * (n + 1)/2;
    }
    printf("%d", pivo);
}


void media10entradas(){
    int n;
    double aux = 0.0;


    for(int i = 1; i <= 10; i++){
        scanf("%d", &n);
        aux = (aux + n)/2;
    }
    
    printf("Media = %.1lf ", aux);
}


void menorEmaiorDe10entradas(){
    int n[10], menor, maior, i;

    for(i = 0; i < 10; i++){
        scanf("%d", &n[i]);
    }

    menor = n[0];
    maior = n[0];

    for(i = 0; i < 10; i++){
        if(n[i] > maior){
            maior = n[i];
        }else if(n[i] < menor){
            menor = n[i];
        }
    }

    printf("Maior = %d\n", maior);
    printf("Menor = %d " , menor);

}

void media10numeroNegativosPositivos(){
    float media = 0.0, n;
    
    for(int i = 1; i <= 10; i++){
        scanf("%f", &n);
        media = (media + n)/2;        
    }
    printf("Media = %.1f ", media);
}



void divisoresDeUmNumero(){
    int n;

    printf("Digite o numero: ");
    scanf("%d", &n);
    
    printf("Os divisores de %d sao: \n",n);
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            printf("%d\n", i);
        }
    }
}


void somaDosDivisoresDeUmNumero(){
    int n;

    printf("Digite o numero: ");
    scanf("%d", &n);
    
    int soma = 0;
    for(int i = 1; i <= n-1; i++){
        if(n % i == 0){
            soma = soma + i;
        }
    }
    printf("Soma = %d\n",soma);
}


void somaDosMultiplosDe5e3AbaixoDe1000(){
    int soma = 0;

    for (int i = 1; i <= 1000; i++){
        if(i % 5 == 0 || i % 3 == 0){
            soma = soma + i;
        }
    }
    printf("Soma = %d\n", soma);
}


void sequenciaDeFibonacci(){
    int n, fib1 = 1, fib2 =1, soma;

    printf("Digite o numero: ");
    scanf("%d", &n);

    printf("0 1 ");
    for(int i = 0; i <= n; i++){
        printf("%d ", fib2);

        soma = fib1 + fib2;
        fib1 = fib2;
        fib2 = soma;
    }

/*Utilizando função
int fib(int n){                                         
    if (n == 1) 
        return 1;                   
    else if (n == 2) 
        return 1;                 
    else 
        return fib(n - 1) + fib(n - 2);  
    }
*/    
}


void finalizandoOfluxoComNegativoRetornaMaiorMenor(){
    int n, maior=0, menor=0;

    printf("Digite o numero: ");
    scanf("%d", &n);

    menor = maior = n;
    
    do{
        printf("Digite o numero: ");
        scanf("%d", &n);
        
        if(n < menor && n >= 0){
            menor= n;
        }else if(n > maior){
            maior= n;
        }
       
    }while(n >= 0);

    printf("Maior: %d\nMenor: %d \n", maior, menor);

}


void numeroHarmonico(){
    double h=0, n;

    printf("Digite um numero: ");
    scanf("%lf", &n);

    for (int i = 1; i <= n; i++){
        h = h + 1.0/i;
    }
    printf("%.2lf ", h);
}


void trianguloDeFloyd(){
    int n, m = 1, aux = 1;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(int j = 1; j < m; j++){
            printf("%d ", aux);
            aux++;
        }
            m++;
            printf("\n");
    }
}


void verificaNumeroPrimo(){
    int n, cont=0;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){//ou utilizando o metodo de divir o n / 2
        if(n % i == 0){
            cont++;
            //break;
        }
    }

    if(cont == 2){
        printf("%d eh primo ", n);
    }else{
        printf("%d nao eh primo ", n);
    }
}


void valorDeS(){
    /* Outra forma

    double resultado = 0, n = 5, numerador=-1;
    int denominador;

    for(denominador = 1; denominador <= 55; denominador++){
        numerador = numerador + 2;
        resultado = resultado + (numerador / denominador);
    }
    printf("S = %.2lf", resultado);
    */

    //OU
    double  dividendo = 1, resultado = 0, n = 55;
    for(double divisor = 1; dividendo <= n; dividendo++, divisor = divisor + 2){
        resultado += divisor/dividendo;
    }

    printf("%.2lf", resultado);
}


void numeroDeEuler(){
    int n = 10;
    int i, j;
    float f, E = 1.0;

    for(i = 1; i <= n; i++){
        f = 1;
        for(j = 1; j <= i; j++){
            f = f * j;
        }
        E = E + 1.0/f;
    }
    printf("E = %f\n", E);
         //E = E + 1.0/(N*(N-i))...;
}


void maiorNumeroEqtdAparecida(){
    int num[100], n, maior, aux=0;

    printf("Informe a quantidade de numeros a ser lidos: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }

    maior = num[0];

    for(int j = 0; j < n; j++){
        if(num[j] >= maior){
            maior = num[j];
        }
    }
    for(int k = 0; k < n; k++){
        if(num[k] >= maior){
            aux++;
        }
    }   
    printf("Maior = %d eh apareceu %d\n", maior, aux);
}


void percorraUmMatriz(){
    int mat[5][5];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("Digite o valor de mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){ 
            printf("[%d] ", mat[i][j]);
        }
        printf("\n");
    }
}


void preenchaUmArray3d(){
    int i, j, k, d[5][5][5];

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            for(k = 0; k < 5; k++){
                 d[i][j][k] = 0;
            }
        }
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            for(k = 0; k < 5; k++){
                 printf("%d ", d[i][j][k]);
            }printf("\n");
        }printf("\n");
    }
}

void baseVetorBaseMatriz(){
    int valores[5] = {1,2,3,4,5};
    char n[7] = {'M', 'I', 'C', 'A', 'E', 'L', '\0'};
    int nrs[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    char nome[] = "Micael Resende";
    int mxn[][2] = {{1,2},{3,4},{5,6},{7,8},{9,10}};
    
    
    printf("%s\n", nome);
    
    for(int i = 0; i < 6; i++){
        printf("%c ", n[i]);
    }


    //leitura de vetor
    for(int i = 0; i < sizeof(valores)/sizeof(int); i++){
        printf("\n%d ", valores[i]);
    }
    

    //leitura de matriz
    printf("\n");
    for(int j = 0; j < 4; j++){
        for(int k = 0; k < 3; k++){
            printf("%d ", nrs[j][k]);
        }
    }
    

    //leitura de matriz
    printf("\n");
    for(int x = 0; x < 5; x++){
        for(int y = 0; y < 2; y++){
            printf("%d ", mxn[x][y]);
        }
    }
    
    
    //soma matriz
    int soma = 0;
    for(int m = 0; m < 5; m++){
        for(int n = 0; n < 2; n++){
            soma += mxn[m][n];   
        }
    }
    printf("\nSUM = %d\n", soma);


    //media
    float media = 0.0, s = 0.0;

    for(int i = 0; i < 5; i++){
        s = s + valores[i];
    }
    media = s / 5;
    printf("%f \n", media);


    //maior e menor
    int lista[5] = {10, 1, 100, 0, 7};
    int maior = lista[0], menor = lista[0];
    
    for(int i = 0; i < 5; i++){
        if(lista[i] > maior){
            maior = lista[i];
        }else if(lista[i] < menor){
            menor = lista[i];
        } 
    }
    printf("\nMaior = %d", maior);
    printf("\nMaior = %d", menor);
}



void imprimir6entradas(){
    int valores[6];

    for(int i = 0; i < 6; i++){
        printf("Informe um numero: ");
        scanf("%d", &valores[i]);
    }

    for(int j = 0; j < 6; j++){
        printf("%d ", valores[j]);
    }
}

void media5valores(){
    float valores[5], media = 0, soma = 0;

    for(int i = 0; i < 5; i++){
        printf("Informe um numero: ");
        scanf("%f", &valores[i]);
        soma = soma + valores[i];
    }

    for(int j = 0; j < 5; j++){
       printf("%.1f\n", valores[j]);
    }
    media = soma / 5.0;

    printf("Media = %.2f", media);
}



void operacoesArrayA(){
    int A[6] = {1, 0, 5, -2, -5, 7};
    float soma = 0;

    soma = soma + A[0] + A[1] + A[5];
    printf("Soma = %.2f\n", soma);

    A[4] = 100;

    for(int j = 0; j < 6; j++){
        printf("%d\n", A[j]);
    }
}




void lendo8valoresEsomandoXeY(){
    int nrs[8], x, y, soma = 0;

    for(int i = 0; i < 8; i++){
        printf("Informe um numero: ");
        scanf("%d", &nrs[i]);
    }

    printf("Informe um valor para e X e Y: ");
    scanf("%d %d", &x, &y);

    x = nrs[x];
    y = nrs[y];

    soma = x + y;

    printf("Soma = %d ", soma);

}


void lendo10valoresEverificandoOspares(){
    int valores[10];

    for(int i = 0; i < 10; i++){
        printf("Informe um valor: ");
        scanf("%d", &valores[i]);
    }

    int aux=0;
    for(int j = 0; j < 10; j++){
        if(valores[j] % 2 == 0){
            aux++;
        }
    }

    printf("Voce informou um total de %d pares", aux);
}


void imprime10valoresMenorMaior(){
    int X[10];
    int menor, maior;

    for(int i = 0; i < 10; i++){
        printf("Informe um valor: ");
        scanf("%d", &X[i]);
    }

    menor = X[0];
    maior = X[0];

    for(int j = 0; j < 10; j++){
        if(X[j] > maior){
            maior = X[j];
        }else if(X[j] < menor){
            menor = X[j];
        }
    }

    printf("O maior valor do vetor eh: %d\n", maior);
    printf("O menor valor do vetor eh: %d", menor);

}



void lendo10valoresVerificaNegativosEsomaPosistivos(){
    float n[10], soma = 0.0;

    for(int i = 0; i < 10; i++){
        printf("Informe um numero: ");
        scanf("%f", &n[i]);
    }

    int neg = 0;
    for(int j = 0; j < 10; j++){
        if(n[j] > 0){
            soma = soma + n[j];
        }else if(n[j] < 0){
            neg++;
        }
    }

    printf("No vetor possui %d numeros negativos\n", neg);
    printf("A soma dos positivos eh %.2f", soma);
}


void somaDoArrayAB(){
    int A[10], B[10], c[10];

    for(int i = 0; i < 10; i++){
        printf("Informe um valor: ");
        scanf("%d", &A[i]);
    }

    for(int i = 0; i < 10; i++){
        printf("Informe um valor: ");
        scanf("%d", &B[i]);
    }

    /*for(int k = 0; k < 2; k++){
        for(int j = 0; j < 5; j++){
              c = c +  A[k] + B[j];
        }
    }
    */

   for(int i = 0; i < 10; i++){
        c[i] = A[i] - B[i];
        printf("Array A - Array B = %d\n", c[i]);
   }
}


void arrayDe100posicao100NmultiplosDe7(){
    int array[100], j=0;

    for(int i = 0; i < 100; i++){
        while(j % 7 == 0 || j % 10 ==7){
            j++;
        }
        array[i] = j;
        j++;
    }

    for(int i = 0; i < 100; i++){
        printf("%d ", array[i]);
    }
}



void imprimeOs100naoMultiplosDe7(){
    int multiplos[100], contador = 0;

    for(int i = 0; i < 100; i++){
        while((contador % 7 == 0) || (contador % 10 == 7)){
           contador++;
        }
        multiplos[i] = contador;
        contador++;
    }

    for(int i = 0; i < 100; i++){
        printf("%d ", multiplos[i]);
    }
}


void imprimindoOquadradoDe20valores(){
    float vet[20], aux[20];

    for(int i = 0; i < 20; i++){
        printf("Digite um valor: ");
        scanf("%f", &vet[i]);
    }

    printf("\nValores informados ao quadrado: \n");
    for(int j = 0; j < 20; j++){
        aux[j] = vet[j] * vet[j];
        printf("%.2f^2 = %.2f\n", vet[j], aux[j]);
    }
}


void verificandoSePossuiValoresIguais(){
    int valores[10];

    for(int i = 0; i < 10; i++){
        printf("Insira um numero: ");
        scanf("%d", &valores[i]);
    }

    int cont = 0;
    for(int j = 0; j < 10; j++){
        for(int k = j + 1; k < 10; k++){
            if(valores[j] == valores[k]){
                printf("O %d se repetiu\n", valores[j]);
                cont++;
            }
        }
    }
    printf("Ao total %d numeros se repetiu", cont);
}


void verificandoValoresEinserindoValoresNrepetidos(){
    int nrs[10];

    for(int i = 0; i < 10; i++){
        printf("Insira um numero: ");
        scanf("%d", &nrs[i]);

        for(int j = 0; j < i; j++){
            if(nrs[i] == nrs[j]){
                printf("Informe outro numero\n");
                i--;
                continue;
            }
        }
    }
    for(int i = 0; i < 10; i++){
        printf("%d ", nrs[i]);
    }


    /*  Outra forma
     *     
    int valores[10], i=0, igual=0;
    
    while(i < 10){
        printf("Informe um valor: ");
        scanf("%d%*c", &valores[i]);
        
        int aux = 0;
        
        while(aux < i){
            if(valores[aux] == valores[i]){
                printf("Numero ja esta no array. ");
                igual = 1;
            }
            
            aux++;
            
            if(igual == 1){
                printf("Entre novamente com um valore[%d]: ", i);
                scanf("%d%*c", &valores[i]);
                igual = 0;
                aux = 0;
            }
        } 
        
        i++;
    }
    
    for(int i = 0; i < 10; i++){
        printf("valores[%d] = %d\n", i, valores[i]);
    }
    *
    */

}


void desvioPadrao(){
    float vetor[10];

    for(int i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%f", &vetor[i]);
    }

    float somatorio = 0;
    for(int j = 0; j < 10; j++){
        somatorio += vetor[j];
    }

    float media = somatorio / (float) 10;
    float variacoes = 0, v = 0;
    
    for(int i = 0; i < 10; i++){
        v = vetor[i] - media;
        variacoes += v * v;
    }

    float sig = sqrt(variacoes/10);
    printf("Desvio padrao = %.2f\n", sig);
}



void ordenandoArray(){
    float nrs[10];
    
    for(int  i = 0; i < 10; i++){
        printf("Informe um valor: ");
        scanf("%f", &nrs[i]);
    }
    
    float troca= 0.0;
    
    system("cls");
    
    printf("Desordenado: ");
    for(int f = 0; f < 10; f++){
        printf("[%.2f] ", nrs[f]);    
    }
    
    
    for(int j = 0; j < 10; j++){
        for(int k = 0; k < 10; k++){
            if(nrs[j] < nrs[k]){
                troca = nrs[j];
                nrs[j] = nrs[k];
                nrs[k] = troca;
            }   
        }
    }
    
    printf("\nOrdenado:    ");
    for(int i = 0; i < 10; i++){
      printf("[%.2f] ", nrs[i]);
    }
}


void menorValorEmUmaMatriz(){
    int valores[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Entre com um valor: ");
            scanf("%d", &valores[i][j]);
        }
    }

    int menor = valores[0][0];

    for(int i = 0; i < 3; i++){
        for(int k = 0; k < 3; k++){
            if(valores[i][k] < menor){
                menor = valores[i][k];
            }
        }
    }
    printf("Menor valor = %d", menor);
}




void maiorValorEmUmaMatriz(){
    int valores[4][4];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("Informe um valor: ");
            scanf("%d", &valores[i][j]);
        }
    }

    int maior = valores[0][0];
    for(int i = 0; i < 4; i++){
        for(int k = 0; k < 4; k++){
            if(valores[i][k] > maior){
                maior = valores[i][k];
            }
            printf("[%d]x[%d]\n", i, k);
        }
    }

    for(int j = 0; j < 4; j++){
        for(int m = 0; m < 4; m++){
            if(valores[j][m] == maior){
                printf("Maior valor esta na Linha [%d] X Coluna [%d] = %d ", j, m, maior);
            }
        }
    }
}


void diagonalPrincipal5x5(){
    int matriz[5][5];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i == j){
                matriz[i][j] = 1;
            }else{
                matriz[i][j] = 0;
            }
        }
    }


    for(int i = 0; i < 5; i++){
        for(int k = 0; k < 5; k++){
            printf("[%d] ", matriz[i][k]);
        }
            printf("\n");
    }
    /* Outra forma

        for(int i = 0; i < 5; i++){
        for(int k = 0; k < 5; k++){
            if(k == i){
                printf("1 ");
            }else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    */
}


void valoresMaioresQue10(){
    int matriz[4][4];

    for(int i = 0; i < 4; i++){
        for(int k = 0; k < 4; k++){
            printf("Insira um valor: ");
            scanf("%d", &matriz[i][k]);
        }
    }

    int cont=0;
    for(int j = 0; j < 4; j++){
        for(int k = 0; k < 4; k++){
            if(matriz[j][k] > 10){
                cont++;
            }
        }
    }

    printf("Na matriz possui %d numeros maiores 10. ", cont);
}



void contandoValoresNegativosNaMatriz(){
    int matriz[4][4];
    int cont=0;


     for(int i = 0; i < 4; i++){
        for(int k = 0; k < 4; k++){
           printf("Entre com um valor: ");
           scanf("%d", &matriz[i][k]);
        }
    }

    for(int i = 0; i < 4; i++){
        for(int k = 0; k < 4; k++){
            if(matriz[i][k] < 0){
                cont++;
            }
        }
    }
    printf("Total de numeros negativos = %d", cont);
}


void somaDaDiagonalPrincipal(){
    float matriz[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Informe um valor: ");
            scanf("%f", &matriz[i][j]);
        }
    }

    float soma = 0;
    for(int x = 0; x < 3; x++){
        for(int y = 0; y < 3; y++){
            if(x == y){
                soma += matriz[x][y];
            }
        }
    }

    printf("Soma = %.2f ", soma);
}


void somaDaDiagonalSecundaria(){
    int matriz[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Informe um valor [%d]x[%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int soma = 0;
    for(int k = 0; k < 3; k++){
        for(int x = 0; x < 3; x++){
            if(k + x == 2){
                soma += matriz[k][x];
            }
        }
    }printf("Soma da diagonal secundaria = %d ", soma);
}



void somaDosValoresDeUmaColuna(){
    int matriz[3][3], vet[3];
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("ENTRE COM O VALOR DA MATRIZ NA POSICAO [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        vet[i]=0;
    }
    
    for(int x=0; x<3; x++){
        for(int y=0; y<3; y++){
            vet[y] = vet[y] + matriz[x][y];
        }
    }
    
     for(int x=0; x<3; x++){
        for(int y=0; y<3; y++){
            printf("[%.1d]   ", matriz[x][y]);
        }
        printf("\n");
    }
    
    printf("------------------\n");
    for(int i=0; i<3; i++){
        printf("%d     ", vet[i]);
    }
}




void somaDosValoresDeUmaLinha(){
    int matriz[3][3], lin[3];
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &matriz[i][j]);
        }
        lin[i]=0;
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            lin[i] = lin[i] + matriz[i][j];
        }
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("[%d] ", matriz[i][j]);
        }
        printf(" = %d  ", lin[i]);
        printf("\n");
    }
}


void notasAlunos(){
    float notas[3][10];
    int prova1, prova2, prova3, menor;

    for(int i = 0; i < 3; i++){
        printf("\nProva %d\n", i+1);
        for(int j = 0; j < 10; j++){
            printf("Nota do aluno %d: ", j+1);
            scanf("%f", &notas[i][j]);
        }
    }
    prova1 = prova2 = prova3 = 0;
    menor = 10;
    for(int k = 0; k < 10; k++){
        for(int y = 0; y < 3; y++){
            if(notas[k][y] <= menor){
                menor = notas[y][k];
            }
        }

        for(int x = 0; x < 3; x++){
            if(menor == notas[x][k] && x == 0){
                prova1++;
                break;
            }else if(menor == notas[x][k] && x == 1){
                prova2++;
                break;
            }else if(menor == notas[x][k] && x == 2){
                prova3++;
                break;
            }
        }
    }

    printf("Numero de alunos que tiveram a menor nota na prova 1 foi de %d\n", prova1);
    printf("Numero de alunos que tiveram a menor nota na prova 2 foi de %d\n", prova2);
    printf("Numero de alunos que tiveram a menor nota na prova 3 foi de %d\n", prova3);

}


void somaDosValoresaAcimaDP(){
    int tam[5][5], soma = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("Digite um valor: ");
            scanf("%d", &tam[i][j]);
        }
    }

    for(int x = 0; x < 5; x++){
        for(int y = 0; y < 5; y++){
            if(x < y){
                soma = soma + tam[x][y];
            }
        }
    }
    printf("Soma = %d", soma);
}


void somaDosValoresAbaixoDP(){
    int tam[6][6], soma = 0;

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            printf("Digite um valor: ");
            scanf("%d", &tam[i][j]);
        }
    }

    for(int x = 0; x < 6; x++){
        for(int y = 0; y < 6; y++){
            if(x > y){
                soma = soma + tam[x][y];
            }
        }
    }
    printf("Soma = %d", soma);
}



void somaDosValoresNaoPertencentesDPeDS(){
    int tam[5][5], soma = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &tam[i][j]);
        }
    }

    for(int x = 0; x < 5; x++){
        for(int y = 0; y < 5; y++){
            if(!(x==y || x+y==5)){
                soma = soma + tam[x][y];
            }
        }
    }
    printf("Soma = %d", soma);
}

void somaDPeDSeSomaDiferenca(){
     int tam[5][5], soma = 0, somaResto = 0, diferenca = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("Value [Row %d][Column %d]: ", i+1, j+1);
            scanf("%d", &tam[i][j]);

            if((i==j || i+j==5-1)){
                soma = soma + tam[i][j];
            }else{
                somaResto = somaResto + tam[i][j];
            }
        }
        printf("\n");
    }

    printf("\n");
    for(int x = 0; x < 5; x++){
        for(int y = 0; y < 5; y++){
            printf("%d ", tam[x][y]);
        }
        printf("\n");
    }

    diferenca = soma - somaResto;
    printf("\nSoma = %d\n", soma);
    printf("Soma dos valores fora da DP e DS = %d\n", somaResto);
    printf("Diferenca = %d", diferenca);
}



void imprimeMatrizBigualA2(){
    double A[5][5], B[5][5];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("Valor [%d][%d]: ", (i+1), (j+1));
            scanf("%lf", &A[i][j]);

            B[i][j] = pow(A[i][j],2);
        }
        printf("\n");
    }

    printf("-------MATRIZ B-------\n");
    for(int x = 0; x < 5; x++){
        for(int y = 0; y < 5; y++){
            printf("%.0lf ", B[x][y]);
        }printf("\n");
    }
}


void atribuindoUmaStringAoutra(){
    int i;
    char str1[20] = "Hello World";
    char str2[20];

    for(i = 0; str1[i] != '\0'; i++){
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    printf("%s", str2);
}

void manipulandoStrings(){
        char str[15] = "Teste";
    char str1[15] = "bom ", str2[15] = "dia";
    char palavra1[100], palavra2[100];
    
    printf("%d\n", strlen(str));
    //scanf("%[^\n]%*c");
    //strcpy(str2, str1);
    //printf("String 1: %s\n", str1);

    strcat(str1, str2);
    printf("%s \n", str1);
    
    printf("Entre com uma palavra: ");
    scanf(" %100[^\n]", palavra1);
    printf("Entre com outra palavra: ");
    scanf(" %100[^\n]", palavra2);
    
    if(strcmp(palavra1, palavra2) == 0){
        printf("Strings iguais\n");
    }else {
        printf("Strings diferentes");
    }
}


void lerString(){
    char palavra[20];

    printf("Informe uma palavra: ");
    scanf(" %s", palavra);

    printf("%s", palavra);
}


void imprime4primeirasLetras(){
    char palavra[100];

    printf("Informe uma palavra: ");
    fgets(palavra, 100, stdin);

    for(int i = 0; i < 4; i++){
       printf("%c", palavra[i]);
    }
}


void tamanhoString(){
    char palavra[100];

    fgets(palavra, 100, stdin);

    int tam = 0;
    for(int i = 1; palavra[i] != '\0'; i++){
        ++tam;
    }

    printf("%d ", tam);
}


void imprimeStringInverso(){
    char nome[40];

    printf("Informe uma palavra: ");
    scanf("%s", nome);
    
    int tam = strlen(nome);
    for(int i = tam; i >= 0; i--){
        printf("%c", nome[i]);
    }

    // Outra forma
    char string[10];
    char invertida[10];

    scanf("%s", string);

    int j = 0;
    for(int i = strlen(string)-1; i >= 0; i--) {
        invertida[j] = string[i];
        j++;
    }
    invertida[j] = '\0';

    printf("%s", invertida); 

    //int aux;
    //aux = inverter(string);
    //printf("%s", aux);


    
    /* Outra forma

    void inverter(char vet[]){
        int i, aux, fim, tam = strlen(vet);

        fim = tam - 1; 
        for(i = 0; i < tam/2; i++){
            aux = vet[i];
            vet[i] = vet[fim];
            vet[fim] = aux;
            fim--;
        }
    }
    */
}


void imprimeInverso(){
    char nome[100], temp;

    printf("Informe uma palavra: ");
    scanf("%s", nome);

    int tam =  strlen(nome)-1;//remove o '\0' e não o Enter

    for (int i = 0; i < tam; i++, tam--) {
            temp = nome[i];
            nome[i] = nome[tam];
            nome[tam] = temp;
    }
    printf("%s\n", nome);
}


void quantidadeVogais(){
    char vogais[50], nova;

    printf("Informe uma palavra: ");
    scanf("%s", vogais);
    fflush(stdin);
    printf("Informe um caractere: ");
    scanf(" %c", &nova);

    int cont = 0, tam = strlen(vogais)-1;

    for(int i = 0; i <= tam; i++){
        if(vogais[i] == 'a' || vogais[i] == 'e' || vogais[i] == 'i' ||
           vogais[i] == 'o' || vogais[i] == 'u'){
            cont++;
            vogais[i] = nova;
        }
    }

    printf("Total de vogais = %d\n", cont);
    printf("Nova palavra: %s", vogais);


    /** Outra forma
     * 
     *  char vogais[] = "aeiouAEIOU";
        char palavra[100] = "Maria Luiza";
        int numVogais = 0;

        for (int i = 0; palavra[i] != '\0'; i++) {
            for (int j = 0; vogais[j] != '\0'; j++) {
                if (vogais[j] == palavra[i]) {
                    numVogais++;
                    break;
                }
            }
        }
        
        printf("Quantidade de vogais: %d", numVogais);
     * 
     */

}


void verificaPalindromo(){
    char palavra[100];
    int tam = strlen(palavra)-1, diferente=0;

    printf("Informe uma palavra: ");
    scanf("%s", palavra);
    
    for(int i = 0; i <= tam; i++){
        if(palavra[i] != palavra[tam--]){
            diferente++;
        }
    }   
    
    if(diferente == 0){
        printf("Palindromo");
    }else{
        printf("Nao eh Palindromo");
    }

    /*
        printf("Informe uma palavra: ");
        scanf("%s", palavra);

        int tam = strlen(palavra);
    
        for(int i = 0; i < tam/2; i++){//Só precisa ir até a metade já que a outra metada já foi comparada
            if(palavra[i] != palavra[tam-i-1]){
                printf("Nao eh palindromo\n");
                return 0;
                //break;
            }else{
                printf("Eh palindromo");
            }
        }
    
    */
}


void palavraContida(){
     char str1[100], str2[100];

    printf("Digite a primeira string: ");
    fgets(str1, 100, stdin);

    printf("Digite a segunda string: ");
    fgets(str2, 100, stdin);

    // Remove o caractere de quebra de linha das strings
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Transforma as strings em minúsculas
    for (int i = 0; str1[i]; i++) {
        str1[i] = tolower(str1[i]);
    }

    for (int i = 0; str2[i]; i++) {
        str2[i] = tolower(str2[i]);
    }

    if (strstr(str1, str2) != NULL) {
        printf("A segunda string esta contida dentro da primeira.\n");
    } else {
        printf("A segunda string nao esta contida dentro da primeira.\n");
    }
    //printf("%d", strstr(palavra1, palavra2) - palavra1);
}

void palavraContidaQTD(){
    char str1[100], str2[100];
    int qtd = 0;

    printf("Digite a primeira string: ");
    fgets(str1, 100, stdin);

    printf("Digite a segunda string: ");
    fgets(str2, 100, stdin);

    // Remove o caractere de quebra de linha das strings
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Transforma as strings em minúsculas
    for (int i = 0; str1[i]; i++) {
        str1[i] = tolower(str1[i]);
    }

    for (int i = 0; str2[i]; i++) {
        str2[i] = tolower(str2[i]);
    }

    if (strstr(str1, str2) != NULL) {
        qtd++;
    }

    printf("A segunda string esta contida dentro da primeira %d vezes.\n", qtd);
}


int main(){
   
    //sucessorEantecessor();
    //soma(); 
    //media();
    //dataNasc();
    //kmParaMs();
    //celsiusParaFahrenheit();
    //grausParaRadianos();
    //premioDistribuido();
    //raioCirculo();
    //alturaRaioCilindro();
    //valorHipotenusa();
    //converterMinusculoMaiuscula();
    //inverteValor();
    //operacaoDeslocamento();
    //complementoBitaBit();
    //deslocamento();
    //operacoesLogicaBitaBit();
    //operadorTernario();
    //verificaOmaiorNumero();
    //parOUimpar();
    //salarioEverificaEmprestimo();
    //verificaNumeroEhPositivo();
    //indiceCorporal();
    //impostoPorEstado();
    //categoriaNadador();
    //categoriaPesoAltura();
    //tiposDeMedia();
    //mesesDoAno();
    //diasDaSemana();
    //operacoesBasicas();
    //verficaNumDivisivelpor3e5();
    //equacaoSegundoGrau();
    //condicaoComCaractere();
    //utilizandoGoto();
    //naturais0ateN();
    //naturais0ateNdescrecente();
    //naturais0ateNimpares();
    //cincoPrimeirosmultiplosDe3();
    //soma50primeiroNpares();
    //contagemRegressiva10a0();
    //some10entradas();
    //triangulo();
    //somaGauss();
    //media10entradas();
    //menorEmaiorDe10entradas();
    //media10numeroNegativosPositivos();
    //divisoresDeUmNumero();
    //somaDosDivisoresDeUmNumero();
    //somaDosMultiplosDe5e3AbaixoDe1000();
    //sequenciaDeFibonacci();
    //finalizandoOfluxoComNegativoRetornaMaiorMenor();
    //numeroHarmonico();
    //trianguloDeFloyd();
    //verificaNumeroPrimo();
    //valorDeS();
    //numeroDeEuler();
    //maiorNumeroEqtdAparecida();
    //percorraUmMatriz();
    //preenchaUmArray3d();
    //baseVetorBaseMatriz();
    //imprimir6entradas();
    //media5valores();
    //operacoesArrayA();
    //lendo8valoresEsomandoXeY();
    //lendo10valoresEverificandoOspares();
    //imprime10valoresMenorMaior();
    //lendo10valoresVerificaNegativosEsomaPosistivos();
    //somaDoArrayAB();
    //arrayDe100posicao100NmultiplosDe7();
    //imprimeOs100naoMultiplosDe7();
    //imprimindoOquadradoDe20valores();
    //verificandoSePossuiValoresIguais();
    //verificandoValoresEinserindoValoresNrepetidos();
    //desvioPadrao();
    //ordenandoArray();
    //menorValorEmUmaMatriz();
    //maiorValorEmUmaMatriz();
    //diagonalPrincipal5x5();
    //valoresMaioresQue10();
    //contandoValoresNegativosNaMatriz();
    //somaDaDiagonalPrincipal();
    //somaDaDiagonalSecundaria();
    //somaDosValoresDeUmaColuna();
    //somaDosValoresDeUmaLinha();
    //notasAlunos();
    //somaDosValoresAcimaDP();
    //somaDosValoresAbaixoDP();
    //somaDosValoresNaoPertencentesDPeDS();
    //somaDPeDSeSomaDiferenca();
    //imprimeMatrizBigualA2();
    //atribuindoUmaStringAoutra();
    //manipulandoStrings();
    //lerString();
    //imprime4primeirasLetras();
    //tamanhoString();
    //imprimeStringInverso();
    //imprimeInverso();
    //quantidadeVogais();
    //verificaPalindromo();
    //palavraContida();
    palavraContidaQTD();


    return 0;
}
 