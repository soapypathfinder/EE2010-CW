#include "FewestLinks.h"
#include "Network.h"   // needed once we use the Network object

FewestLinks::FewestLinks()
    : RoutingPolicy("FewestLinks") {
}

std::vector<char> FewestLinks::chooseRoute(const Network& network,
                                           char from) const {
    std::vector<char> route;
    // TODO: find the route from 'from' to the destination with the fewest links,
    // check it with isRouteUsable(network, route), and return it.
    return route;
}