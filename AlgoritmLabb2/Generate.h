#pragma once
#include <vector>

class Generate
{
public:
    Generate();
    ~Generate();

    std::vector <int> MonRising(size_t size);
    std::vector <int> MonLowering(size_t size);
    std::vector <int> Static(size_t size);
    std::vector <int> random(size_t size);

    //void listReset();

    void printList(std::vector <int> list);

private:


};

struct compare
{
    bool operator() (const int lhs, const int rhs)
    {
        return lhs > rhs;
    }
};
