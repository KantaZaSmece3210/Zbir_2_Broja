#include <stdio.h>
#include <stdlib.h>

int zbir_brojeva_int(int a, int b)
{
    return a+b;
}

float zbir_brojeva_float(float a, float b)
{
    return a+b;
}

int main()
{
    char input_file_path[256];

    strcpy(input_file_path,"../generator/");

    char file_name[100];

    printf("Input file name: "); scanf("%s",file_name);

    strcat(input_file_path,file_name);

    FILE* input = fopen(input_file_path,"r");

    //..............................................................................

    int subtask, broj_test_primjera;

    fscanf(input, "%d", &subtask);

    fscanf(input, "%d", &broj_test_primjera);

    //..............................................................................

    char user_input_file[256];

    sprintf(user_input_file,"user_%d_%d.txt", subtask,broj_test_primjera);

    FILE* user = fopen(user_input_file,"w");

    switch(subtask)
    {
        case 1:
        {
            int a,b;
            fscanf(input,"%d",&a);
            fscanf(input,"%d",&b);

            fprintf(user,"%d",zbir_brojeva_int(a,b));

            break;
        }

        case 2:
            {
                long long a,b;
                fscanf(input,"%lld",&a);
                fscanf(input,"%lld",&b);

                fprintf(user,"%lld",zbir_brojeva_int(a,b));

                break;
            }

        case 3:
            {
                double a,b;
                fscanf(input,"%lf",&a);
                fscanf(input,"%lf",&b);

                fprintf(user,"%lf",zbir_brojeva_float(a,b));

                break;
            }
    }

    fclose(input);
    fclose(user);
    return 0;
}
