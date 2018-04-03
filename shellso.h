#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <string.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/wait.h>
#define SHELLMARK "$ "
#define true 1
#define false 0

char** tokeniza(char *comando, char **args);

int isCommand(char *caminho);