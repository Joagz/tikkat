// Command Types

#define T_NEW_PROJECT 0x01
#define T_NEW_BRANCH 0x02
#define T_NEW_TICKET 0x04

#define T_DELETE_PROJECT 0x05
#define T_DELETE_BRANCH 0x06
#define T_DELETE_TICKET 0x08q

#define T_USER_NEW 0x0A
#define T_USER_LOGIN 0x0B
#define T_USER_LOGOUT 0x0C
#define T_USER_DELETE 0x0D

#define T_SWITCH_PROJECT 0x0E
#define T_SWITCH_BRANCH 0x0F

#define T_LIST_BRANCH_TICKETS 0x12
#define T_LIST_BRANCHES 0x14

// Command Args

#define A_DESCRIPTION 0xA0
#define A_VERBOSE 0xA1
#define A_ID 0xA2
#define A_LIST 0xA3

#define A_COMPLETE 0xA4
#define A_PENDING 0xA5
