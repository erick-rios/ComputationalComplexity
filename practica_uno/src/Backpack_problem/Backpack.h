#ifndef BACKPACK_H
#define BACKPACK_H

#include <vector>
#include "Object.h"

class Backpack {
    private:
        int capacity;
        std::vector<Object> objects;

    public:
        Backpack(int capacity);
        void generateInstance(int n);
        const std::vector<Object>& getObjects() const;
        int getCapacity() const;
        void printObjects() const;
};

#endif // BACKPACK_H