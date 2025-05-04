#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct a autor;
typedef struct b livro;

struct a
{
    char nome[100];
    int id;
    int nLivros;
};

struct b
{
    char titulo[100];
    char isbn[20];
    int idA;
    float preco;
};

int ex1(const char *filename, const char *txt_filename, int autor_id)
{
    FILE *file = fopen(filename, "rb+");
    if (!file)
    {
        return 0;
    }

    int num_autores, num_livros;
    fread(&num_autores, sizeof(int), 1, file);

    autor *autores = (autor *)malloc(num_autores * sizeof(autor));
    fread(autores, sizeof(autor), num_autores, file);

    fread(&num_livros, sizeof(int), 1, file);

    livro *livros = (livro *)malloc(num_livros * sizeof(livro));
    fread(livros, sizeof(livro), num_livros, file);

    int autorMaisLivros = 0, numMaxLivros = 0, empate = 0;
    for (int i = 0; i < num_autores; i++)
    {
        if (autores[i].nLivros > numMaxLivros)
        {
            autorMaisLivros = autores[i].id;
            empate = 0;
        }
        else if (autores[i].nLivros == numMaxLivros)
        {
            empate = 1;
        }
    }
    if (!empate)
    {
        for (int i = 0; i < num_livros; i++)
        {
            if (livros[i].idA == autorMaisLivros)
            {
                livros[i].preco *= 1.10;
            }
        }
    }

    fseek(file, sizeof(int) + num_autores * sizeof(autor) + sizeof(int), SEEK_SET);
    fwrite(livros, sizeof(livro), num_livros, file);

    FILE *txt_file = fopen(txt_filename, "w");
    if (!txt_file)
    {
        free(autores);
        free(livros);
        fclose(file);
        return 0;
    }

    for (int i = 0; i < num_autores; i++)
    {
        if (autores[i].id == autor_id)
        {
            for (int j = 0; j < num_livros; j++)
            {
                if (livros[j].idA == autor_id)
                {
                    fprintf(txt_file, "ISBN: %s, Título: %s, Nome do Autor: %s\n", livros[j].isbn, livros[j].titulo, autores[i].nome);
                }
            }
            break;
        }
    }

    free(autores);
    free(livros);
    fclose(file);
    fclose(txt_file);

    return 1;
}

int main()
{
    const char *filename = "autores_e_livros.bin";
    const char *txt_filename = "lista_livros.txt";
    int autor_id = 12; // Example author ID

    int result = atualizar_precos_e_criar_lista(filename, txt_filename, autor_id);
    if (result == 1)
    {
        printf("Operation completed successfully.\n");
    }
    else
    {
        printf("Operation failed.\n");
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dadosSala sala, *pSala;

typedef struct
{
    int dia, mes, ano;
} data;

typedef struct dadosUc
{
    char refUC[100]; // Nome da Unidade Curricular
    data dataEx;     // Data do exame
    pSala lista;     // Ponteiro para a lista de salas
} uc;

struct dadosSala
{
    char refSala[100]; // Nome da sala
    int capacidade;    // Capacidade da sala
    pSala prox;        // Ponteiro para a próxima sala
};

int compara_datas(data d1, data d2)
{
    if (d1.ano != d2.ano)
        return d1.ano - d2.ano;
    if (d1.mes != d2.mes)
        return d1.mes - d2.mes;
    return d1.dia - d2.dia;
}

uc *elimina(uc *tab, int *nUCs, data d)
{
    int i, j = 0, comparaData;
    uc *novaTab = (uc *)malloc((*nUCs) * sizeof(uc));
    if (novaTab == NULL)
    {
        return tab;
    }

    for (i = 0; i < *nUCs; i++)
    {
        comparaData = 0;
        if (tab[i].dataEx.ano != d.ano){
            comparaData = tab[i].dataEx.ano - d.ano;
        }
        else if (tab[i].dataEx.mes != d.mes){
            comparaData = tab[i].dataEx.mes - d.mes;
        } else {
            comparaData = tab[i].dataEx.dia - d.dia; }

        if (comparaData >= 0){
            novaTab[j++] = tab[i];
        } else {
            pSala atual = tab[i].lista;
            while (atual != NULL)
            {
                pSala temp = atual;
                atual = atual->prox;
                free(temp);
            }
        }
    }
    *nUCs = j;
    return novaTab;
}

int main()
{
    // Example data
    int nUCs = 2;
    uc unidadesCurriculares[2] = {
        {"Programacao", {29, 6, 2024}, NULL},
        {"Matematica", {12, 7, 2024}, NULL}};

    // Dynamically creating room lists for the example
    pSala sala1 = (pSala)malloc(sizeof(sala));
    strcpy(sala1->refSala, "AM-2");
    sala1->capacidade = 100;
    sala1->prox = NULL;
    unidadesCurriculares[0].lista = sala1;

    pSala sala2 = (pSala)malloc(sizeof(sala));
    strcpy(sala2->refSala, "IPM");
    sala2->capacidade = 50;
    sala2->prox = NULL;
    unidadesCurriculares[1].lista = sala2;

    // Define date to compare
    data date = {30, 6, 2024};

    // Call function to eliminate UCs before the given date
    uc *new_v = elimina(unidadesCurriculares, &nUCs, date);

    // Output remaining UCs
    for (int i = 0; i < nUCs; i++)
    {
        printf("Remaining UC: %s\n", new_v[i].refUC);
    }

    // Free dynamically allocated memory
    for (int i = 0; i < nUCs; i++)
    {
        pSala atual = new_v[i].lista;
        while (atual != NULL)
        {
            pSala temp = atual;
            atual = atual->prox;
            free(temp);
        }
    }
    free(new_v);

    return 0;
}

void imprimirSalas(uc *tab, int nUCs, const char *nomeSala)
{
    for (int i = 0; i < nUCs; i++)
    {
        pSala atual = tab[i].lista;
        while (atual != NULL)
        {
            if (strcmp(atual->refSala, nomeSala) == 0)
            {
                printf("UC: %s\n", tab[i].refUC);
                break;
            }
            atual = atual->prox;
        }
    }
}