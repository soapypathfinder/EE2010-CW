
#ifndef PREFERREDROUTE_H
#define PREFERREDROUTE_H

#include "RoutingPolicy.h"

class PreferredRoute : public RoutingPolicy {
public:
    PreferredRoute();

    std::vector<char> chooseRoute(const Network& network,
                                  char from) const override;
};

#endif
