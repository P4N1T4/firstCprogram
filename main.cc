#include <iostream>
using namespace std;

int main(int argc, char** argv){
   cout << "You have entered " << argc << " Arguments " << "\n";
   for (int i = 0 ; i < argc ; ++i)
      cout << "argument " << i << " : " << argv[i] << "\n";
   return 0;
}