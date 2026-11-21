
#ifndef EVENTLOGGER_H
#define EVENTLOGGER_H

#include <optional>
#include <string>
#include <vector>

struct Event {
    std::string type;
    int step;
    std::optional<int> messageId;
    std::vector<char> stationIds;
};

class EventLogger {
private:
    std::vector<Event> events;

public:
    EventLogger();
    void addEvent(std::string type, int step,
                  std::optional<int> messageId,
                  std::vector<char> stationIds);
    const std::vector<Event>& getEvents() const;
    void clear();
};

#endif
