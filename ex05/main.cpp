#include "Harl.hpp"

class Solution{
    public :
        void foo(int a){
            std :: cout << "foo " << a << std ::endl;
        }

        int bar(double a){
            std :: cout << "bar " << a << std ::endl;
            return static_cast<int>(a);
        }
};

int maisn(){
    Solution s;
    void (Solution::*ptr1)(int) = &Solution::foo;
    int (Solution::*ptr2)(double) = &Solution::bar;
    (s.*ptr1)(5);
    (s.*ptr2)(5.5);
    return 0;
}
int main()
{
    Harl harl;
    harl.complain("DEBUG");
    return 0;
}
