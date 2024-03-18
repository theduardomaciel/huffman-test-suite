#include "file_io.h"
#include "utils.h"

// Operações de leitura de arquivos

FILE *open_file(const char *filename, const char *mode)
{
    FILE *file = fopen(filename, mode);

    if (file == NULL)
    {
        perror("Erro ao abrir o arquivo");
        exit(1);
    }

    return file;
}

void close_file(FILE *file)
{
    fclose(file);
}

char *extract_filename(const char *filename)
{
    char *extracted = malloc(strlen(filename) + 1);
    strcpy(extracted, filename);

    char *dot = strrchr(extracted, '.');

    if (dot != NULL)
    {
        *dot = '\0';
    }

    return extracted;
}

char *extract_extension(const char *filename)
{
    // Procuramos a última ocorrência do caractere '.' na string
    char *dot = strrchr(filename, '.');

    // Se encontrarmos, retornamos a string a partir do ponto
    if (dot != NULL)
    {
        return dot;
    }

    return NULL;
}

void create_directory(const char *path)
{
    char *command = concat_strings("mkdir -p ", path);
    system(command);
    free(command);
}