#include<iostream>
#include<thread>
#include"server.h"

using namespace std;


int main(){



    Server s;
    int portNumber = 10000;
    s.initializeServer(portNumber);
    for(auto socket: s.sockets)
        std::thread thread_pbject(s.readData(socket));
        

    

    return 0;
}