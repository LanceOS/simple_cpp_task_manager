#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include "../Types/"

class IFileFormatter {
public:
    virtual ~IFileFormatter default = 0;

    virtual std::vector<DataRecord> readAndFormat(std::fstream& stream) const = 0;

    virtual bool formatAndWrite(std::fstream& stream, const std::vector<DataRecord>& data) const = 0;
};



class CSVFormatter : public IFileFormatter {
    public:
        std::vector<DataRecord> readAndFormat(const std::fstream& stream);
};
