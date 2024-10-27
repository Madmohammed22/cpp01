#include "Zombie.hpp"

int main(){
    int n = 3;
    std :: string name = "mohammed";
    Zombie* obj = zombieHorde(n, name);
    for (int i = 0; i < n; i++){
        obj->announce();
    }

    delete [] obj;
    return (0); 
}