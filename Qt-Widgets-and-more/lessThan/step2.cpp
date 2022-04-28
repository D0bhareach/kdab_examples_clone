#include <iostream>
#include <tuple>

namespace {

class Foo
{
public:
    explicit Foo(int x, int y, int z)
        : x(x)
        , y(y)
        , z(z)
    {
    }
    friend bool operator<(const Foo &lhs, const Foo &rhs)
    {
        if (lhs.x != rhs.x)
            return lhs.x < rhs.x;
        if (lhs.y != rhs.y)
            return lhs.y < rhs.y;
        return lhs.z < rhs.z;
    }

private:
    int x;
    int y;
    int z;
};
}

void go2()
{
#define compare(x, expected)                                                                       \
    std::cout << #x << ": " << (((x) == expected) ? "Correct" : "Oops") << std::endl
    std::cout << "==== Step 2 ======\n";
    const Foo val1(10, 10, 10);
    const Foo val2(10, 20, 20);
    const Foo val3(20, 0, 0);

    compare(val1 < val1, false);
    compare(val1 < val2, true);
    compare(val1 < val3, true);
    compare(val2 < val1, false);
    compare(val2 < val3, true);
    compare(val3 < val1, false);
    compare(val3 < val2, false);
}
