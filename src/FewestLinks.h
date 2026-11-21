
#ifndef FEWESTLINKS_H
#define FEWESTLINKS_H

#include "RoutingPolicy.h"

class FewestLinks : public RoutingPolicy {
public:
    FewestLinks();

    std::vector<char> chooseRoute(const Network& network,
                                  char from) const override;
};

#endif
