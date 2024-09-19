#ifndef SUBSET_VERIFIER_H
#define SUBSET_VERIFIER_H

#include <vector>

// Clase que se encarga de verificar si el producto del subconjunto es <= t
class SubsetVerifier {
public:
    // Método que verifica si el producto del subconjunto es <= t
    bool verifySubset(const std::vector<int>& subset, int t);
};

#endif // SUBSET_VERIFIER_H
