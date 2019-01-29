#ifndef CCONN_MYSQL_H
#define CCONN_MYSQL_H

#include <iostream>
#include <string>
using namespace std;

class CConn_mysql
{
    public:
        /************* Zona de atributos ************************/
        String usuario;
        String host;
        String baseDatos;
        String password;


        /********************************************************/
        CConn_mysql(); // constructor
        virtual ~CConn_mysql(); // Desctructor

        /************ Zona de prototipos ************************/
        void conectar();
        /*********************************************************/

    protected:

    private:
};

#endif // CCONN_MYSQL_H
