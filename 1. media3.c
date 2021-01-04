
#include <stdio.h>

int s(int soma){float n1, n2, n3, n4, m;

               scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
               m= (n1*2+n2*3+n3*4+n4*1)/10;
               printf("Media: %.1f\n", m);}


int main() {float ex;

    if (s >= 7)
        printf("Aluno aprovado.\n");
    else if(s < 5)
        printf("Aluno reprovado.\n");
    else{
        printf("Aluno em exame.\n");
        scanf("%f", &ex);
        printf("Nota do exame: %.1f\n", ex);
        s=(s+ex)/2;
        if(s >= 5)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n", s);}


        return 0;
}

