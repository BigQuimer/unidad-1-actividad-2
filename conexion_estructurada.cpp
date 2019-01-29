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
