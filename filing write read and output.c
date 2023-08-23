
#include <stdio.h>

int main()
    {
        FILE *file = fopen("data.txt", "a");

        while (1)
        {
            char name[255], section;
            int Class;
            double GPA;

            printf("Name:");
            fgets(name, 255, stdin);
            if (name[0] == '\n')
            {
                break;
            }

            printf("Class:");
            scanf("%d", &Class);

            printf("Section:");
            scanf(" %c", &section);

            printf("GPA:");
            scanf("%lf", &GPA);

            getchar();

            fprintf(file, "Name:%s", name);
            fprintf(file, "Class:%d\n", Class);
            fprintf(file, "Section:%c\n", section);
            fprintf(file, "GPA:%f\n", GPA);
            fprintf(file, "\n");
        }

    fclose(file);

    file = fopen("data.txt", "r");
    
    char line[255];
    
    printf("\nOutput:\n");
    
    while(fgets(line, 255, file) != NULL)
    {
        printf("%s", line);
    }
    
    fclose(file);

    return 0;
}
