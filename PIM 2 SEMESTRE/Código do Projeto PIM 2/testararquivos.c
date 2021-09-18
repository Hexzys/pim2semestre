#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>
#include <dirent.h>

testararquivos()
{
    CreateDirectory("cadastro de funcionarios", NULL);
    CreateDirectory("cadastro de medicos", NULL);
    CreateDirectory("consultas", NULL);
    CreateDirectory("contabilidadesul", NULL);
    CreateDirectory("contabilidadeleste", NULL);
    CreateDirectory("contabilidadeoeste", NULL);
    CreateDirectory("feedbacks", NULL);
    CreateDirectory("relatorios", NULL);
    CreateDirectory("pacientessul", NULL);
    CreateDirectory("pacientesleste", NULL);
    CreateDirectory("pacientesoeste", NULL);
//    CreateDirectory("consultaoeste", NULL);
//    CreateDirectory("consultasul", NULL);
//    CreateDirectory("consultaleste", NULL);
    CreateDirectory("relatorios", NULL);
}
