#ifndef OBJECT_H
#define OBJECT_H

class Object {
    private:
        int weight;
        int revenue;

    public:
        Object(int weight, int revenue);
        int getWeight() const;
        int getRevenue() const;
};

#endif // OBJECT_H