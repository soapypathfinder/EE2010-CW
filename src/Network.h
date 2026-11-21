
#ifndef NETWORK_H
#define NETWORK_H

#include "NetworkNode.h"
#include "CommunicationLink.h"
#include <map>
#include <vector>

class Network {
private:
    std::vector<NetworkNode> nodes;
    std::vector<CommunicationLink> links;
    std::map<char, std::vector<std::vector<char>>> routes;

public:
    Network();
    void initialise();
    void setNodeActive(char id, bool active);
    void setLinkActive(char a, char b, bool active);
    bool isNodeActive(char id) const;
    bool isLinkActive(char a, char b) const;
    std::vector<std::vector<char>> getRoutes(char from) const;
    bool isRouteValid(const std::vector<char>& route) const;
};

#endif
