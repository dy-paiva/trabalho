// basic file operations
#include <iostream>
#include <fstream>
using namespace std;

int main () {
  FILE *myfile;
  myfile = fopen("teste.txt", "w");
  fprintf(myfile, "Writing this to a file.\n");
  fclose(myfile);
  return 0;
}
