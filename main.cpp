/*
 * Copyright 2015 Jordi Estrada <email>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

// http://www.tutorialspoint.com/postgresql/postgresql_c_cpp.htm

#include <iostream>
#include <pqxx/pqxx>

using namespace std;
using namespace pqxx;

int main(int argc, char **argv) {
    string sql;

    try {
        connection C("dbname=mydb user=jordi password=Clave006 hostaddr=127.0.0.1 port=5432");
        if (C.is_open()) {
            cout << "Opened database successfully: " << C.dbname() << endl;
        } else {
            cout << "Can't open database" << endl;
            return 1;
        }

        /* Create a transactional object. */
        work W0(C);
        /*Create SQL statement*/
        sql= "DROP TABLE IF EXISTS SYMBOLS";
        /*Execute SQL query*/
        W0.exec( sql );
        W0.commit();
        cout << "Table SYMBOLS deleted" << endl;
	
        /* Create a transactional object. */
        work W1(C);
        /*Create SQL statement*/
        sql = "CREATE TABLE SYMBOLS("  \
              "SYMBOL         CHAR(10) PRIMARY KEY NOT NULL," \
              "NAME           CHAR(80)," \
              "IPO_YEAR       CHAR(4)," \
              "SECTOR         CHAR(40)," \
              "INDUSTRY       CHAR(80)," \
              "SUMMARY_QUOTE  CHAR(80) ); ";
        /*Execute SQL query*/
        W1.exec( sql );
        W1.commit();
        cout << "Table SYMBOLS created successfully" << endl;

//         /* Create a transactional object. */
//         work W2(C);
//        /*Create SQL statement*/
//         sql = "INSERT INTO SYMBOLS (SYMBOL,NAME,IPO_YEAR,SECTOR,INDUSTRY,SUMMARY_QUOTE) "  \
//               "VALUES ('A', 'Paul', '1984', 'California', 'Hello', 'World' );";
// 
//         /*Execute SQL query*/
//         W2.exec( sql );
//         W2.commit();
//         cout << "Table SYMBOLS inserted successfully" << endl;

        /* Create a transactional object. */
        work W3(C);
       /*Create SQL statement*/
        sql= "DROP TABLE IF EXISTS QUOTES";
        /*Execute SQL query*/
        W3.exec( sql );
        W3.commit();
        cout << "Table QUOTES deleted" << endl;
	
        /* Create a transactional object. */
        work W4(C);
       /*Create SQL statement*/
        sql = "CREATE TABLE QUOTES("  \
              "SYMBOL         CHAR(10) NOT NULL," \
              "TSTAMP         TIMESTAMP NOT NULL," \
              "TLAST          TIMESTAMP," \
              "LAST_TRADE     FLOAT4," \
              "ASK            FLOAT4," \
              "BID            FLOAT4," \
              "VOLUME         INT4," \
              "PRIMARY KEY ( SYMBOL, TSTAMP ) ); ";
        /*Execute SQL query*/
        W4.exec( sql );
        W4.commit();
        cout << "Table QUOTES created successfully" << endl;

        C.disconnect ();
    } catch (const std::exception &e) {
        cerr << e.what() << std::endl;
        return 1;
    }

    return 0;
}
