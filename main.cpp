#include <iostream>
#include <math.h>
using namespace std;
int llave,salida;
int a,b,c,x;
float d,y,f1,res;
string s1="";

int main()
{
    do{
    cout<<"**Seleccione una opcion**"<<endl;
    cout<<"** 1 Igualdades        **"<<endl;
    cout<<"** 2 Numero mayor que       **"<<endl;
    cout<<"** 3 Rango de semestre  **"<<endl;
    cout<<"** 4 Datos diferentes  **"<<endl;
    cout<<"** 5 El grupo es A o B  **"<<endl;
    cout<<"** 6 El numero es par o menor que 3  **"<<endl;
    cout<<"** 7 El numero es impar o mayor o igual que 12  **"<<endl;
    cout<<"** 8 El nombre es Pepe, Luis o Mario  **"<<endl;
    cout<<"** 9 No es cierto que x en menor que 7  **"<<endl;
    cout<<"** 10 La variable Y no es mayor o igual que 3.28   **"<<endl;
    cout<<"** 11 Ejercicios Primera seccion   **"<<endl;
    cout<<"*************************"<<endl;
    cin>>llave;
    switch(llave)
    {
        case 1:
                cout<<"Ingresa el valor de cada variable"<<endl;
                cout<<"A=";
                cin>>a;
                cout<<"B=";
                cin>>b;
                cout<<"C=";
                cin>>c;
                cout<<"D=";
                cin>>d;
                if(a==b && a==c && a==d)
                {
                 cout<<"Los datos son iguales"<<endl;
                }else
                    {
                        cout<<"Los datos no son iguales"<<endl;
                    }
        break;
        case 2:
            cout<<"Ingresa el valor de cada variable"<<endl;
                cout<<"X=";
                cin>>a;
                cout<<"Y=";
                cin>>b;
                cout<<"W=";
                cin>>c;
            if(a<b && b<c )
            {
                cout<<"X es menor que Y  y Y es menor que W"<<endl;
            }else{cout<<"X no es menor que Y O Y no es menor que W"<<endl;}
            break;
        case 3:
            cout<<"Ingresa el numero de semestre"<<endl;
                cout<<"Semestre=";
                cin>>a;
                if(a>1 && a<=9)
                {
                cout<<"El semestre "<<a<<" esta entre el rango establecido de [1-9]"<<endl;
                }else{cout<<"El semestre "<<a<<" NO esta entre el rango establecido de [1-9]"<<endl;}
            break;
        case 4:cout<<"Ingresa el valor de cada dato a comparar"<<endl;
                cout<<"R1=";
                cin>>a;
                cout<<"R2=";
                cin>>b;
                cout<<"R3=";
                cin>>c;
                if(a!=b && b!=c && c!=a)
                {
                    cout<<"FELICIDADES Ninguno de los datos son iguales"<<endl;
                }else{cout<<"Creo que algo esta mal ya que Todos los datos son iguales"<<endl;}
            break;
        case 5:
                cout<<"Ingresa la respectiva letra del grupo"<<endl;
                cout<<"Grupo=";
                cin>>s1;
                if(s1=="A" || s1=="B")
                {
                    cout<<"El grupo pertenece a la asignacion de A o B"<<endl;
                }else{cout<<"El grupo NO pertenece a la asignacion de A o B"<<endl;}
            break;
        case 6:
            cout<<"Ingresa el valor de la variable a identificar"<<endl;
                cout<<"X=";
                cin>>a;
                if(a%2==0 || a<3)
                {
                    cout<<"El numero ingresado es par o es menor que 3 "<<endl;
                }else{cout<<"El numero ingresado NO es par o NO es menor que 3 "<<endl;}
            break;
        case 7:
            cout<<"Ingresa el valor de la variable a identificar"<<endl;
                cout<<"X=";
                cin>>a;
                if(a%2!=0 || a>=12)
                {
                    cout<<"El numero ingresado es inpar o es mayor o igual que 12 "<<endl;
                }else{cout<<"El numero ingresado NO es inpar o NO es mayor o igual que 12 "<<endl;}
            break;
        case 8:
            cout<<"Ingresa un nombre"<<endl;
                cout<<"Nombre=";
                cin>>s1;
                if(s1=="Mario" || s1=="Pepe" || s1=="Luis")
                {
                    cout<<"El nombre "<<s1<<" Esta en la lista asignada"<<endl;
                }else{cout<<"El nombre "<<s1<<" NO Esta en la lista asignada"<<endl;}
            break;
         case 9:
            cout<<"Ingresa el valor de la variable a identificar"<<endl;
                cout<<"X=";
                cin>>a;
                if(a<7)
                {
                    cout<<"es cierto que "<<a<<" es menor que 7  "<<endl;
                }else{cout<<"No es cierto que "<<a<<" es menor que 7"<<endl;}
            break;
            case 10:
            cout<<"Ingresa el valor de la variable a identificar"<<endl;
                cout<<"Y=";
                cin>>f1;
                if(f1>=3.2)
                {
                    cout<<f1<<" Es mayor o igual que 3.2"<<endl;
                }else{cout<<f1<<" No es mayor o igual que 3.2"<<endl;}
            break;
            case 11:
                 a=4;
                 b=5;
                 c=1;
                 d=-3;
                 x=2;
                 y=-1;

                cout<<"Ecuaciones a valorar"<<endl;
                cout<<"1.- (B*A-(B^2/4)) * C = ";
                res=b*a-pow(b,(2/4.0))*c;
                cout<<res<<endl;

                cout<<"2.- (A*B) /3^2= ";
                res=((a*b)/(pow(3,2)));
                cout<<res<<endl;

                cout<<"3.- ((B+C)/(2*A+10))*(3*B)-6= ";
                res=((((b+c)/(2*a+10))*(3*b))-6);
                cout<<res<<endl;


                cout<<"4.- A^B^C= ";
                res=pow(pow(a,b),c);
                cout<<res<<endl;

                cout<<"5.- 3*X^4-5*X^3+X*12-17= ";
                res=(3*pow(x,4))-(5*pow(x,3))+(x*12)-17;
                cout<<res<<endl;

                cout<<"6.- (B+D)/(C+4)= ";
                res=((b+d)/(c+4));
                cout<<res<<endl;

                cout<<"7.- (B^2)-(A*A)*C= ";
                res=(pow(b,2))-((a*a)*c);
                cout<<res<<endl;

                cout<<"8.- ((X)^2+(Y)^2)^1/2= ";
                res=pow((pow(x,2)+pow(y,2)),1/2.0);
                cout<<res<<endl;
            break;

    }
    cout<<"Ingrese 5 para regresar al menu de lo contrario precione otro numero y enter"<<endl;
    cin>>salida;
    // condicional de while que saca del siclo do
    }while(salida==5);

        cout<<"Vuelva Pronto"<<endl;

    system("pause");
    return 0;
}
