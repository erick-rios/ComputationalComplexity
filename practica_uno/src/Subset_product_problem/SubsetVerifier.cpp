#include "SubsetVerifier.h"

// Método que verifica si el producto del subconjunto es <= t
bool SubsetVerifier::verifySubset(const std::vector<int>& subset, int t) {
    int product = 1;
    for (int elem : subset) {
        product *= elem;
        if (product > t) {  // Si el producto excede t, devolver false
            return false;
        }
    }
    return true;
}
