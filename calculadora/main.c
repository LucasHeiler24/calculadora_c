#include <stdio.h>
#include <stdlib.h>

void main()
{
    //inicializo minhas variáveis
    float num, num2, calc, novCalc;
    int cont=1;
    char op, nov, op2;

    //faço um laço de repetição infinito
    while(1){
        //faço um contador para não passar aqui de novo apenas a primeira vez
        if(cont == 1){
        printf("Informe seu primeiro numero!\n"); //peço um numero pro usuário
        scanf("%f", &num); //digita o numero
        cont++; //incremento o contador

        //Lista para o usuario escolher sua operaçção
        printf("==========OPERACOES=========\n");
        printf("Para somar digite o operador: (+)\n");
        printf("Para subtrair digite o operador: (-)\n");
        printf("Para multiplicar digite o operador: (x)\n");
        printf("Para dividir digite o operador: (/)\n");
        scanf("%s", &op); //digita o operador

        //caso o usuario digita um operador informado na lista cai nos if
        if (op == '+'){
            printf("%.2f + \n", num);
            printf("Digite outro numero\n");
            scanf("%f", &num2);
            calc = num + num2;
            printf("%.2f + %.2f = %.2f\n",num, num2, calc);
        }
        else //pra não dar erro de mostrar o ultimo else e cair nele utilizo um else como se fosse um break
        if(op == '-'){
            printf("%.2f - \n", num);
            printf("Digite outro numero\n");
            scanf("%f", &num2);
            calc = num - num2;
            printf("%.2f - %.2f = %.2f\n",num, num2, calc);
        }
        else
        if(op == 'x' || op == 'X'){
            printf("%.2f x \n", num);
            printf("Digite outro numero\n");
            scanf("%f", &num2);
            calc = num * num2;
            printf("%.2f x %.2f = %.2f\n",num, num2, calc);
        }
        else
        if(op == '/'){
            printf("%.2f / \n", num);
            printf("Digite outro numero\n");
            scanf("%f", &num2);
            calc = num / num2;
            printf("%.2f / %.2f = %.2f\n",num, num2, calc);
        }
        else{ //caso o usuario digite algum operador não informado finaliza aqui o programa
            printf("Operador invalido, tente novamente!\n");
            return 1;
            }
        }
        else{ // caso o usuario fez o calculo pela primeira vez cai neste else
            float num3; //faço uma outra variável para armazenar outro número

            printf("Deseja calcular novamente seu resultado? (%.2f)\n", calc);

            //lista de opções caso deseja continuar a calcular
            printf("============COMANDOS============\n");
            printf("Para continuar digite: (S)\n");
            printf("Para nao continuar pressione qualquer tecla\n");
            scanf("%s", &nov); //aqui digita se deseja continuar ou não

            //caso digite S ou s pra continuar entra nesse if e continua a calcular seu resultado
            if(nov == 's' || nov == 'S'){
                 printf("==========OPERACOES=========\n");
                 printf("Para somar digite o operador: (+)\n");
                 printf("Para subtrair digite o operador: (-)\n");
                 printf("Para multiplicar digite o operador: (x)\n");
                 printf("Para dividir digite o operador: (/)\n");
                 scanf("%s", &op2);

            if (op2 == '+'){
                printf("%.2f + \n", calc);
                printf("Digite outro numero\n");
                scanf("%f", &num3);
                novCalc = calc + num3;
                printf("%.2f + %.2f = %.2f\n",calc, num3, novCalc);
                calc = novCalc;
            }
            else
            if(op2 == '-'){
                printf("%.2f - \n", calc);
                printf("Digite outro numero\n");
                scanf("%f", &num3);
                novCalc = calc - num3;
                printf("%.2f - %.2f = %.2f\n",calc, num3, novCalc);
                calc = novCalc;
            }
            else
            if(op2 == 'x' || op2 == 'X'){
                printf("%.2f x ", calc);
                printf("Digite outro numero\n");
                scanf("%f", &num3);
                novCalc = calc * num3;
                printf("%.2f x %.2f = %.2f\n",calc, num3, novCalc);
                calc = novCalc;
            }
            else
            if(op2 == '/'){
                printf("%.2f / \n", calc);
                printf("Digite outro numero\n");
                scanf("%f", &num3);
                novCalc = calc / num3;
                printf("%.2f / %.2f = %.2f\n",calc, num3, novCalc);
                calc = novCalc;
        }
        else{
            printf("Operador invalido, tente novamente\n");
            return 1;
            }
        }
        else{ //caso o usuario digite qualquer tecla entra no else e finaliza o programa
            return 1;
            }
        }
    }
}
