
#ifndef NETWORKNODE_H
#define NETWORKNODE_H

class NetworkNode {
private:
    char stationID;
    bool active;

public:
    NetworkNode(char stationID);

    char getstationID() const;
    bool isActive() const;
    void setActive(bool active);
};

#endif
