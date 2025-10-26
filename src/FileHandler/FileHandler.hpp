#include <iostream>
#include <fstream>
#include <vector>

class FileHandler {
  private:
    std::fstream storageFile;
  public:
    bool openFile(const std::string& fileName);

    void closeFile();

    std::fstream& getFileStream() { return storageFile; };
};
