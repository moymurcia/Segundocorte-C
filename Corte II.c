
*******************************************************************************/
#include <stdio.h>
void exit();
int Menu_profe();
int validacion(int usuar,int clav);
int validar(int usuar);
void ingreso();
int usuar;
int clav;
int i,x;
int id_estudiante;
int Registrar();
int notas();

struct docentes
{
    int Usuario;
    int Clave;
};    
struct docentes d[2]={{39740,123456},{2984467,456789}};

struct estudiantes
{
    int Usuario;
    int Clave;
};    
struct estudiantes e[4]={{1015427,123456},{2984467,456789},{1015427,123},{1020755,456}};

int main()
{
    
    while(1)
    {
        int Menu;
        printf("Bienvenido al colegio CASITA AZUL \n");
        printf("1.Docente \n 2.Estudiante \n ,3.Salir \n");
        scanf ("%d",&Menu);
        switch (Menu)
        
        {
            {
                case 1:
                ingreso( );
                break;
            }
            {
                case 2:
                ingreso( );
            }
            
            {
                case 3:
                exit(1);
                break;
            }
            default: 
            printf("enter a valid Menu \n");
        }
    void ingreso()
    {
        printf("\n digite su usuario \t");
        scanf("%d",&usuar);
        printf("\n digite su clave\t");
        scanf("%d",&clav);
        x = validacion(usuar,clav);
    }    

    int validacion(int Usuario, int Clave);
    {
        for (i=0;i<2;i++) 
        {
            if(d[i].Usuario==usuar)
            {
                if(d[i].Clave==clav)
                {
                    return i; 
                    break;
                }
                else
                {
                    printf("\n clave invalida");
                    exit(1);
                    
                }
            }
        }
    }    
    
    int Menu_profe;
    {
        printf("1.Registrar \n 2. Consultar  \n ,3.Salir \n");
        scanf ("%d",&Menu_profe);
        switch (Menu_profe)
        {
             case 1:
            {
                Registrar( );
                break;
            }
            case 2:
            {
                
            }
        }
        
    }
    int Registrar();
    printf("\n digite el codigo del estudiante \t");
    scanf("%d",&usuar);
    x = validar(usuar);
    {
        for (i=0;i<1;i++) 
        {
            if(d[i].Usuario==usuar)
            {
                return i; 
                break;
            }    
            else
            {
                printf("\n usuario no existe");
                exit(1);
            }
        }
    }
}   