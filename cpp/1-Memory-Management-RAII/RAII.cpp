#include <iostream>
#include <unistd.h> // For POSIX system calls.

class NetworkSocket
{
private:
    int socketDescriptor;

public:
    // Constructor: resource acquisition.
    NetworkSocket(int fd) : socketDescriptor(fd)
    {
        std::cout << "Socket " << socketDescriptor << " acquired and opened.\n";
    }

    // Destructor: guarantied lets resource free.
    ~NetworkSocket()
    {
        if (socketDescriptor != -1)
        {
            std::cout << "Socket " << socketDescriptor << " safely closed.\n";
            close(socketDescriptor); // Linux system call for closing.
        }
    }

    // Limit copying ability (socket has to be unic).
    NetworkSocket(const NetworkSocket &) = delete;
    NetworkSocket &operator=(const NetworkSocket &) = delete;
};

void simulateConnection()
{
    NetworkSocket simSocket(42); // Socket is opened.
    // Even if throw std::runtime_error("Error!") happens,
    // destructor simSocket will run and close socket
}