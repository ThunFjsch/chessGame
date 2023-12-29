#ifndef EVENTS_H
#define EVENTS_H

typedef enum {
   E_NO,                ///< Used for initialisation of an event variable
   E_START,
   E_EVENT1,
   E_EVENT2,
   E_EVENT3,               ///< End the statemachine
} event_t;

#endif
