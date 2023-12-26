#include "FileReplacer.hpp"

int main(int argc, char *argv[]) {
  if (argc != 4) {
    std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
    return 1;
  }

  std::string filename = argv[1];
  std::string outputFile = filename + ".replace";
  FileReplacer replacer(filename, outputFile);

  if (!replacer.replace(argv[2], argv[3])) {
    std::cerr << "Failed to replace strings in file." << std::endl;
    return 1;
  }

  return 0;
}
