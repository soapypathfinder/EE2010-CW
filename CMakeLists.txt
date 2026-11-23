cmake_minimum_required(VERSION 4.3)
project(EE2010_CW)

set(CMAKE_CXX_STANDARD 17)

include_directories(src)

add_executable(EE2010_CW
        src/CommunicationLink.cpp
        src/CommunicationLink.h
        src/EventLogger.cpp
        src/EventLogger.h
        src/FewestLinks.cpp
        src/FewestLinks.h
        src/Message.cpp
        src/Message.h
        src/Network.cpp
        src/Network.h
        src/NetworkNode.cpp
        src/NetworkNode.h
        src/PreferredRoute.cpp
        src/PreferredRoute.h
        src/RoutingPolicy.cpp
        src/RoutingPolicy.h
        src/SimulationEngine.cpp
        src/SimulationEngine.h
        src/main.cpp)
