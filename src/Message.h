
#ifndef MESSAGE_H
#define MESSAGE_H

#include <cstddef>
#include <vector>

// Types shown in the class diagram.
enum class Priority { Normal, Emergency };
enum class MessageStatus { Queued, InTransit, Delivered, Undeliverable };

class Message {
private:
    int id;
    char source;
    char destination;
    Priority priority;
    char currentStation;
    std::vector<char> route;
    std::size_t routeIndex;
    MessageStatus status;

public:
    Message(int id, char source, Priority priority);
    int getId() const;
    char getSource() const;
    char getDestination() const;
    Priority getPriority() const;
    char getCurrentStation() const;
    const std::vector<char>& getRoute() const;
    MessageStatus getStatus() const;
    void setRoute(const std::vector<char>& route);
    void setStatus(MessageStatus status);
    void advanceOneHop();
};

#endif
