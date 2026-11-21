
#include "Message.h"

Message::Message(int newId, char from, Priority newPriority) {
    id = newId;
    source = from;
    destination = 'D';
    priority = newPriority;
    currentStation = from;
    routeIndex = 0;
    status = MessageStatus::Queued;
}
