#include <stdint.h>

class IWDGInterface{
    public:
        /**
         *  I imagine the constructor in the actual driver look like this
         *  IndependentWatchdog();
         */

        /**
         * initiation option 1: 
         * regular independent watchdog with timeout in ms
         */
        virtual bool watchdogInit(uint32_t timeout) = 0;

        /**
         * initiation option 2:
         * use IWDG as a WWDG, timout in ms
         */
        virtual bool watchdogInit(uint32_t counter_timeout, uint32_t window_timeout) = 0;

        /* Feed the dog and makes it happy */
        virtual bool refreshWatchdog() = 0;

    private:
};
