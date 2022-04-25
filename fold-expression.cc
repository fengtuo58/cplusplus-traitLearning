// Example program
//fold experssion
#include <iostream>
#include <vector>
#include <climits>
#include <cstdint>
#include <type_traits>
#include <utility>

template<typename ...Args>
void printer(Args&&... args)
{
    (std::cout << ... << args) << '\n';
}

// fold experssion
class message {
    public:
    int getsum(){
        return sum;
        }
    message& operator << (int m) {
        sum += m;
        return *this;
        }
    private:
    int sum;        
    };
    template <typename... _Args>
    void sum(message& msg, _Args&&... args)
    {
        (msg << ... << args);
    }
int main()
{
message messa;
sum(messa, 8, 9, 10, 23);
messa << 8 << 9 << 10 << 23;
std:: cout << messa.getsum();
}

