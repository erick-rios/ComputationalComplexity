#ifndef SUBSETPRODUCT_H
#define SUBSETPRODUCT_H

#include <vector>
#include "Element.h"

class SubsetProduct {
private:
    std::vector<Element> elements;
    int threshold;

public:
    SubsetProduct(int threshold);
    void generateElements(int n);
    const std::vector<Element>& getElements() const;
    int getThreshold() const;
    void printElements() const;
};

#endif
