#ifndef SERVER_H
#define SERVER_H
#include<vector>

class Server{

    public:
    Server();
    ~Server();

    int initializeServer(int port);
    void readData(int socketFD);

    int socketFD;
    std::vector<int> sockets;
};


#endif