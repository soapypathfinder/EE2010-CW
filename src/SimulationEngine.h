
#ifndef SIMULATIONENGINE_H
#define SIMULATIONENGINE_H

#include "Network.h"
#include "Message.h"
#include "RoutingPolicy.h"
#include "EventLogger.h"
#include <cstddef>
#include <memory>
#include <optional>
#include <vector>

class SimulationEngine {
private:
    Network network;
    std::vector<Message> messages;
    std::optional<std::size_t> activeMessageIndex;
    std::unique_ptr<RoutingPolicy> selectedPolicy;
    EventLogger logger;
    int stepCount;
    int nextMessageId;

    std::optional<std::size_t> selectNextMessage();
    bool prepareRouteFromSource(Message& message);

public:
    SimulationEngine();
    int addMessage(char source, Priority priority);
    void setPolicy(std::unique_ptr<RoutingPolicy> policy);
    void setNodeActive(char id, bool active);
    void setLinkActive(char a, char b, bool active);
    void step();
    void run();
    void reset();
    const Network& getNetwork() const;
    const std::vector<Message>& getMessages() const;
    const EventLogger& getLogger() const;
};

#endif
