#include"server.h"
#include<iostream>


Server::Server(){
    std::cout<<"server constructed"<<std::endl;
}

Server::~Server(){
    std::cout<<"server destructed"<<std::endl;
}

void Server::readData(int socketFD){
    std::cout<<"read data from socket"<<std::endl;
}


int Server::initializeServer(int port){
    
}