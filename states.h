#ifndef STATES_H
#define STATES_H

typedef enum {
   S_NO,               ///< Used for initialisation if state is not yet known
   S_START,
   S_STATE1,           ///< Initial state
   S_STATE2,           ///< Initialised subsystems
   S_SHUTDOWN,         ///< System shutdown
   //end
} state_t;

#endif
