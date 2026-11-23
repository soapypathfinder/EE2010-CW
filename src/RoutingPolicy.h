
#ifndef ROUTINGPOLICY_H
#define ROUTINGPOLICY_H

#include <string>
#include <vector>

class Network;

class RoutingPolicy {
private:
    std::string name;

protected:
    bool isRouteUsable(
        const Network& network,
        const std::vector<char>& route
    ) const;

public:
    explicit RoutingPolicy(std::string name);

    virtual ~RoutingPolicy() = default;

    const std::string& getName() const;

    // Pure virtual function makes this class abstract
    virtual std::vector<char> chooseRoute(
        const Network& network,
        char from
    ) const = 0;
};

#endif
