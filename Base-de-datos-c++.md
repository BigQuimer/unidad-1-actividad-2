## Conectar C++ con Base de datos.
___
## Requerimientos:
- Code::Blocks

- Xampp

- Mysql.zip
___

**OBJETIVO:** Lograr hacer las consultas de leer, insertar, modificar y eliminar registros de una base de datos.

En este programa tendremos un menú el cual nos dará a elegir la consulta que deseamos hacer
### Bibliografía:
- http://www.programacionenc.net/index.php?option=com_content&view=article&id=74:mysql-con-dev-c&catid=37:programacion-cc&limitstart=5
- http://www.forosdelweb.com/f96/conectar-base-datos-desde-c-741614/
- http://www.carlosrobles.com/blog/2010/10/usar-bases-de-datos-mysql-en-visual-c/
- https://www.youtube.com/watch?v=siQCWPxDtMo
___
### Paso1: _Crear nuevo proyecto en Code::blocks_

![enter image description here](http://michelletorres.mx/wp-content/uploads/2014/09/Console-application-Configuraci%C3%B3n-de-entradas.png)
### Paso 2: _Seleccionar aplicación de consola en c++ y agregar nombre_
![paso 1](https://aprendiendoprogramacion.files.wordpress.com/2010/12/captura31.jpg)

### Paso 3: _Ejecutar el programa para que se genere el .exe_
![enter image description here](https://lh3.googleusercontent.com/TpI1NTClDuiutrQnAkh768G7UlPXb_uSjnaJGp1xwvkitSG3Zl-D5prHaTlt1d0AxMqkFazRdxq8xw)
### Paso 4:  _agregue los archivos de encabezado mencionados a continuación a_
>"C: \ Dev-Cpp \ include \"
![enter image description here](https://lh3.googleusercontent.com/eY6DA_-HMuJzyg2OHttMLTXdAkFjoXtLA3E0dl_MpqNi8kjau54EdH6aJy_MsFF5sHQkYW8HJUzlqA)

### Paso 5: _agrega el archivo libmysql.a desde el siguiente enlace a_
>"C: \ Dev-Cpp \ include \"
![](https://lh3.googleusercontent.com/5mX50uFUUmcUN1vbPIv1g94L6ufwZnc-9ejHs7dibtWP4IKdwS85HeP0p-60lMyYf-cKVPLVm34Fdw)

### Paso 6: _Tiempo de configuración del proyecto_
![](https://lh3.googleusercontent.com/Z-MgcJsqZBmnzw9dnYG2mkqEkXjUrNTME6k2LEKlmnl-jG0EhjLJIRd6vMSJnAhwuy5wcfMLjCFO1Q)

![](https://lh3.googleusercontent.com/e-tfQDCQdCVSq_d38qUhEQlQYeJRICaqvuwdETNooeA80j3UoMU5RkYlzz14ih4mcNamZayjf3vU0g)

![](https://lh3.googleusercontent.com/7wpiLcOxXuqCEDVWnF4JKuWmA-TYuGAR7rfvcHaHvn9kj33P-1YZaFmZB5Tz6OSJ-sJ_RrAPhxhmPQ)

¡La configuración está hecha!
 Nuevamente compila y ejecuta tu proyecto
 **Nota: si hay algún error de compilación nuevamente, intente la configuración hasta que tenga éxito.**
### Paso 7: _ejecutamos apache y mysql en xampp._
![](https://lh3.googleusercontent.com/cpoI9q1sk_Bcpo_WghexI_NLiW_IbyIaUm1DFMFCMMEhma_B8dhUEa6SJ8Qgu7DWHWEQFX8DTqGW_g)

### Paso 8: _En el navegador, escribimos localhost y ejecutamos phpMyAdmin, después vamos a crear la base de datos, en este caso se llamara prueba:_
![](https://lh3.googleusercontent.com/NeUIHdeo7MKLKxizeLaRi40e2MmQCM0dvjfl_BxMdJNFuhybMqj3cJtPzGPBMC6VF-iD1anUqupDpw)

**Ahora generamos una tabla e insertamos algunos registros.**
![](https://lh3.googleusercontent.com/sMdU25lXdp2NSqHPbF40b7_TUgCB6mvwRXEJ-OGoKmI6Pa06DXnvR1pr0lQChPCRQ_HpZhoOTMeQHA)

### Paso 9: _Después vamos a teclear el siguiente código en nuestro main:_
```
#include <iostream>

#include <windows.h>

#include <mysql.h>

using namespace std;

int main()

{

MYSQL* conn;

//Inicializamos la variable de conexion

conn = mysql_init(0);

/*Nos Conectamos a la base de datos ingresando el servidor, usuario, contraseña

y nombre de la base de datos*/

conn = mysql_real_connect(conn, "localhost", "root", "", "prueba", 0, NULL, 0);

//Si hay conexion nos muestra un mensaje de "conectado"

if(conn){

cout<<"CONECTADO\n";

//Si no, muestra mensaje de no conectado

}else{

cout<<"NO CONECTADO";

}
`````


### Paso 10: _Compilamos y ejecutamos el programa y nos aparecerá el siguiente mensaje:_
![](https://lh3.googleusercontent.com/AhE876dbIzd2SU5DANkw991ixj090JWhFMvUR48xAZWtNd9rC-MzAxwSIt9OUlTfbOpTOg5ftqRdCA)

### Paso 11: _Copiamos libmysql.dll a la ruta donde esta el .exe de nuestro programa._
![](https://lh3.googleusercontent.com/Q8GnYfiXvOrtz62rLNV9sZS_9qxadSzCRjp0qw1B7HMV5x9X2RpH8OwSsKioW99bFF5kT7BP6PAI5Q)
### Paso 12: _Compilamos y ejecutamos y si hicimos todo bien, estaremos conectados a la base de datos._
![](https://lh3.googleusercontent.com/duUt0nuUL62Pn11VPEFAF7hk4NLYBrZTDRp-8rTSbGgg_dcl9P-jIZ9pHrwGls9q3hK74Y3I3Elgfg)
 ### Paso 13: _Una vez conectados a la base de datos, vamos a proceder a realizar una consulta para leer los datos de una tabla de nuestra base de datos._
  >![enter image description here](https://lh3.googleusercontent.com/77RcD-365K7TX1zqf1ynH_AZK4-4xbIDMfdOqtwj2c_biN8ziU57HyjrI00vpH7R9aYnHRUhw1g)
 #### Registros:
     Menú:
 1. Ver registros
 2. Crear registros
 3. Eliminar registros
 4. modificar registros
 5. Salir

````
void seleccionar() {

const char * sql = "SELECT * FROM alumnos";

int query = mysql_query(conn, sql);

//Si la variable de consulta es diferente de 0 muestra error al ejecutar

if(query!=0){

cout<<"ERROR AL EJECUTAR";

//Si no, procedemos a la consulta

}else{

cout<<"EXTRAYENDO FILAS...\n";

//Obteniendo el resultado de la consulta

MYSQL_RES * resultado = mysql_store_result(conn);

//Obteniendo numero de filas afectadas

unsigned long filas_afectadas = mysql_num_rows(resultado);

//Mostrar filas afectadas

cout<<"Filas afectadas: "<<filas_afectadas<<endl;

MYSQL_ROW fila;

//recorremos las filas afectadas para mostrar su contenido

for(int x = 0; x < filas_afectadas; x++){

fila = mysql_fetch_row(resultado);

//Imprimimos el contenido de las filas

cout<<"ID: "<<fila[0]<<" "<<"NOMBRE: "<<fila[1]<<endl;

}

mysql_free_result(resultado);

//cerramos la conexion de mysql

mysql_close(conn);

}
````


_**Tendremos como salida la información de nuestra tabla alumnos.**_
![enter image description here](https://lh3.googleusercontent.com/wU_sG50LtWoioIWnuY4DYv01mtgXk0COFQpEziAgOlaZHnI1C4rrKn8DLlmNm3GwMpXrtC1G7p4)
 #### Ver registros:
Opción 1:

 - CONECTADO

   EXTRAYENDO FILAS

  - Filas afectadas: 5

   ID: 11 NOMBRE: ALBERTANO

   ID: 12 NOMBRE: Angel

   ID: 13 NOMBRE: Pedro

   ID: 14 NOMBRE: Enrique

   ID: 24 NOMBRE: Gerardo
DESEA REALIZAR OTRA CONSULTA? 1- SI, 2=NO
### Paso 14: _Después vamos a insertar información mediante el siguiente código._
````
void insertar(){

string name;

cout<<"INGRESE SU NOMBRE: "<<endl; cin>>name;

//Generamos la instruccion SQL

string query="insert into alumnos(nombre) values('"+name+"')";

const char* q = query.c_str();

cout<<"LA CONSULTA ES: "<<q<<endl;

qstate = mysql_query(conn,q);

if(!qstate)

cout<<"REGISTRO INSERTADO EXITOSAMENTE..."<<endl;

else

cout<<"PROBLEMA DE CONSULTA: "<<mysql_error(conn)<<endl;

qstate = mysql_query(conn,"select * from alumnos");

if(!qstate)

{

res = mysql_store_result(conn);

while(row=mysql_fetch_row(res))

{

cout<<"ID: "<<row[0]<< " "

<<"NOMBRE: "<<row[1]<<endl;

}

}

else

{

cout<<"query error: "<<mysql_error(conn)<<endl;

}

mysql_close(conn);

}
````
**_Y obtendremos como salida el nuevo registro añadido a nuestra tabla de la base de datos._**
![enter image description here](https://lh3.googleusercontent.com/gxdexrpCssxqriBK1Er6P8cGerY80dkrUG4ta9jiRcyIwwEEPQS230Q5V5DsvcTfcnZXKVL-ULI)
 #### Crear registros:
Opción 2:

CONECTADO

INGRESE SU NOMBRE:

DIEGO

Filas afectadas: 5

ID: 11 NOMBRE: ALBERTANO

ID: 12 NOMBRE: Angel

ID: 13 NOMBRE: Pedro

ID: 14 NOMBRE: Enrique

ID: 24 NOMBRE: Gerardo

ID: 25 NOMBRE: DIEGO

DESEA REALIZAR OTRA CONSULTA? 1- SI, 2=NO
### Paso 15: _Si por alguna razón queremos eliminar uno de nuestros registros vamos a utilizar la función DELETE y lo haremos de la siguiente manera:_
 #### Eliminar registros:
````
void eliminar(){

string id;

cout<<"Ingrese el ID que desea eliminar: \n";

cin>>id;

string query="delete from alumnos where ID =('"+id+"')";

const char* q = query.c_str();

qstate=mysql_query(conn, q);

if(!qstate)

{

cout<<"ELIMINADO SATISFACTORIAMENTE"<<endl;

}else{

cout<<"PROBLEMA AL ELIMINAR"<<endl;

}

}
````
**_Solo será cuestión de poner el ID del registro que queremos borrar y se verá algo como esto._**
![enter image description here](https://lh3.googleusercontent.com/bxoxlEYc_4mBkPs2UXXfc5y1fou_3hgNVA76shy2maUBDTsEUDkU0oDrcaUKthusWwT4xh1mODw)
 #### Modificar registros:
Opción 3:

CONECTADO
Ingrese el ID que desea eliminar:
25
ELIMINADO SATISFACTORIAMENTE
DESEA REALIZAR OTRA CONSULTA? 1- SI, 2 - NO
### Paso 16: _Por último, vamos a ver como modificar un registro ya que puede ser necesario para cualquier situación, lo haremos de la siguiente manera utilizando la función UPDATE:
````

void actualizar(){

string id, nombre;

cout<<"INGRESE EL ID QUE DESEA MODIFICAR: \n";

cin>>id;

cout<<"MODIFIQUE EL NOMBRE: \n";

cin>>nombre;

string query="update alumnos set Nombre= '"+nombre+"' where ID = '"+id+"'";

const char* q = query.c_str();

qstate=mysql_query(conn, q);

if(!qstate)

{

cout<<"MODIFICADO SATISFACTORIAMENTE"<<endl;

}else{

cout<<"PROBLEMA AL MODIFICAR"<<endl;

}

}
````
![](https://lh3.googleusercontent.com/6aqEvuPLmPwjfnDo6LNtSDvbm4ogJDUmVIM_2uX-li5X9uGJauAH2V33VTq4H4SywaITb6_AZFc)

Opción 4:

Conectado
INGRESE EL ID QUE DESEA MODIFICAR:
24
MODIFIQUE EL NOMBRE:
EDUARDO
MODIFICADO SATISFACTORIAMENTE
DESEA REALIZAR OTRA CONSULTA? 1- SI, 2- NO.
___
## A continuación les mostraremos el código fuente:
````
#include <iostream>
#include <windows.h>
#include <mysql.h>
#include <string>

using namespace std;

void menu();
void seleccionar();
void insertar();
void eliminar();
void actualizar();
void conexion();

    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES *res;
    int qstate;

int main()
{
int op_while;

    do{
    int op;
    menu();
    cout<<"Opcion: ";
    //El usuario deberá ingresar un numero del 1 al 4, para poder escoger que accion realizar.
    cin>>op;
    conexion();

    if(op==1){
        seleccionar();
    }else if(op==2){
        insertar();

    }else if(op==3){
        eliminar();

    }if(op==4){
        actualizar();
    }else if(op==5){
    exit(1);
    }else if(op > 5){
    cout<< "El numero esta fuera de rango";
    }else if(op <= 0){
    cout<< "El numero esta fuera de rango";

     }
    cout<<"DESEA REALIZAR OTRA CONSULTA? 1 - SI, 2 - NO\n";
    cin>>op_while;
    }while(op_while==1);

        return 0;
}

void menu(){
cout<<"*************************************************************\n";
		cout<<"                  +------------------------+"<<endl;
		cout<<"                  |          Menu          |"<<endl;
		cout<<"                  +------------------------+"<<endl;
		cout<<"                  | Seleccione una Opcion  |"<<endl;
		cout<<"                  | 1.- Ver Registros      |"<<endl;
		cout<<"                  | 2.- Crear Registros    |"<<endl;
		cout<<"                  | 3.- Eliminar Registros |"<<endl;
		cout<<"                  | 4.- Modificar Registros|"<<endl;
		cout<<"                  | 5.- Salir              |"<<endl;
		cout<<"                  +------------------------+"<<endl;
cout<<"*************************************************************"<<endl;
}

void conexion(){
 //Inicializamos la variable de conexion
    conn = mysql_init(0);
    /*Nos Conectamos a la base de datos ingresando el servidor, usuario, contraseña
    y nombre de la base de datos*/
    conn = mysql_real_connect(conn, "localhost", "root", "", "prueba", 0, NULL, 0);

    //Si hay conexion nos muestra un mensaje de "conectado"
    if(conn){
        cout<<"CONECTADO\n";
        //Si no, muestra mensaje de no conectado
    }else{
        cout<<"NO CONECTADO";
    }
}

void seleccionar(){

const char * sql = "SELECT * FROM alumnos";
    int query = mysql_query(conn, sql);
    //Si la variable de consulta es diferente de 0 muestra error al ejecutar
    if(query!=0){
        cout<<"ERROR AL EJECUTAR";
        //Si no, procedemos a la consulta
    }else{
        cout<<"EXTRAYENDO FILAS...\n";
        //Obteniendo el resultado de la consulta
        MYSQL_RES * resultado = mysql_store_result(conn);
        //Obteniendo numero de filas afectadas
        unsigned long filas_afectadas = mysql_num_rows(resultado);
        //Mostrar filas afectadas
        cout<<"Filas afectadas: "<<filas_afectadas<<endl;
        MYSQL_ROW fila;
        //recorremos las filas afectadas para mostrar su contenido
        for(int x = 0; x < filas_afectadas; x++){
            fila = mysql_fetch_row(resultado);
            //Imprimimos el contenido de las filas
            cout<<"ID: "<<fila[0]<<" "<<"NOMBRE: "<<fila[1]<<endl;
        }
        mysql_free_result(resultado);
        //cerramos la conexion de mysql
        mysql_close(conn);
}
}

void insertar(){
 string name;
        cout<<"INGRESE SU NOMBRE: "<<endl; cin>>name;
        //Generamos la instruccion SQL
        string query="insert into alumnos(nombre) values('"+name+"')";

        const char* q = query.c_str();

        cout<<"LA CONSULTA ES: "<<q<<endl;
        qstate = mysql_query(conn,q);

        if(!qstate)
            cout<<"REGISTRO INSERTADO EXITOSAMENTE..."<<endl;
        else
            cout<<"PROBLEMA DE CONSULTA: "<<mysql_error(conn)<<endl;

        qstate = mysql_query(conn,"select * from alumnos");

        if(!qstate)
        {
            res = mysql_store_result(conn);
            while(row=mysql_fetch_row(res))
            {
                cout<<"ID: "<<row[0]<< " "
                    <<"NOMBRE: "<<row[1]<<endl;
            }
        }
        else
        {
            cout<<"query error: "<<mysql_error(conn)<<endl;
        }
        mysql_close(conn);
}

void eliminar(){
string id;
     cout<<"Ingrese el ID que desea eliminar: \n";
     cin>>id;
     string query="delete from alumnos where ID =('"+id+"')";
     const char* q = query.c_str();
     qstate=mysql_query(conn, q);

        if(!qstate)
        {
           cout<<"ELIMINADO SATISFACTORIAMENTE"<<endl;
        }else{
           cout<<"PROBLEMA AL ELIMINAR"<<endl;
        }
}

void actualizar(){
string id, nombre;
     cout<<"INGRESE EL ID QUE DESEA MODIFICAR: \n";
     cin>>id;
     cout<<"MODIFIQUE EL NOMBRE: \n";
     cin>>nombre;
     string query="update alumnos set Nombre= '"+nombre+"' where ID = '"+id+"'";
     const char* q = query.c_str();
     qstate=mysql_query(conn, q);

        if(!qstate)
        {
           cout<<"MODIFICADO SATISFACTORIAMENTE"<<endl;
        }else{
           cout<<"PROBLEMA AL MODIFICAR"<<endl;
        }
}
````
