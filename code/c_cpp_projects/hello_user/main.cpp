#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  auto program = argv[0];
  cout << "This is the program " << program << "." << endl;

  cout << "Hello, ";

  if (argc < 2) {
    cout << "unknown user";
  } else {
    auto name = argv[1];
    cout << name;
  }
  cout << "!" << endl;

  return 0;
}
