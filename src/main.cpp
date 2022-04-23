#include <iostream>
#include "sqlite3.h"

int main(int argc, char* argv[]){
  if(argc > 1){
    
  }
  else{
    sqlite3* db;
    char* zErrMsg = 0;
    int rc;

    rc = sqlite3_open("test.db", &db);

    if(rc){
	std::cout << sqlite3_errmsg(db) << std::endl;
	return(0);
	}
    else{
	std::cout << "Opened database successfully" << std::endl;
	}

    sqlite3_close(db);

  }
   
  return 0;
}
