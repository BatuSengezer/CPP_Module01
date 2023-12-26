#include "FileReplacer.hpp"

FileReplacer::FileReplacer(const std::string &sourceFile,
                           const std::string &destinationFile)
    : sourceFilename(sourceFile), destinationFilename(destinationFile) {}

bool FileReplacer::replace(const std::string &from, const std::string &to) {
  std::string content = readFileIntoString();
  if (content.empty()) {
    return false;
  }

  size_t startPos = 0;
  while ((startPos = content.find(from, startPos)) != std::string::npos) {
    content.replace(startPos, from.length(), to);
    startPos += to.length();
  }

  std::ofstream outFile(destinationFilename);
  if (!outFile) {
    std::cerr << "Error: Unable to create output file " << destinationFilename
              << std::endl;
    return false;
  }

  outFile << content;
  return true;
}

std::string FileReplacer::readFileIntoString() {
  std::ifstream inFile(sourceFilename);
  if (!inFile) {
    std::cerr << "Error: Unable to open input file " << sourceFilename
              << std::endl;
    return "";
  }

  std::stringstream buffer;
  buffer << inFile.rdbuf();
  return buffer.str();
}
