/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/* USANDO VETORES UNIDIMENSIONAIS*/
/* Professor MSc. Cloves Rocha*/

#define NUMELTS 100

int num[NUMELTS]; /* vetor de numeros */
int i;
int total;  /* soma dos numeros */
float avg;  /* media dos numeros */
float diff; /* diferenca entre cada */
            /* numero e a media */
total = 0;
for (i = 0 i < NUMELTS; i++) {
    /* le os numeros no vetor e os soma */
    scanf("%d", &num[i]);
    total += num[i];
} /* fim for */
avg = total / NUMELTS; /* calcula a media */
printf("\ndiferença dos números"); /* imprime titulo */
        /* imprime cada numero e sua diferença */
for (i = 0; i < NUMELTS; i ++) {
    diff = num[i] - avg;
    printf("\n %d %d" , num[i], diff);
    } /* fim for */
    printf("\nA media, : %d", avg);
} /* fim for */ 

