
#ifndef COMMUNICATIONLINK_H
#define COMMUNICATIONLINK_H

class CommunicationLink {
private:
    char endpointA;
    char endpointB;
    bool active;

public:
    CommunicationLink(char a, char b);
    bool connects(char a, char b) const;
    bool isActive() const;
    void setActive(bool active);
};

#endif
