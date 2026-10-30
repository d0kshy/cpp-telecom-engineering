#include <iostream>
#include <vector>
#include <memory>

class Packet
{
public:
    int id;
    int payload[256]; // Data packet Simulation
    Packet(int i) : id(i) {}
};

void processPackets()
{
    // Option nr1: Data is on the Stack; Vector contains objects.
    // Cache locality, every object lays in the memory one by one in a line.
    std::vector<Packet> stackPackets;
    for (int i = 0; i < 1000; ++i)
    {
        stackPackets.emplace_back(i);
    }

    // Option nr2: Data is on the Heap; Vector contains only pointers.
    // Objects are (razbrosany) in  the memory heap, processor has to "jump" over addresses (chache misses).
    std::vector<std::unique_ptr<Packet>> heapPackets;
    for (int i = 0; i < 1000; ++i)
    {
        heapPackets.push_back(std::make_unique<Packet>(i));
    }
}