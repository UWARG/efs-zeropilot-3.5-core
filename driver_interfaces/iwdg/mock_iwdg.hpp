#include <gmock/gmock.h>  // Brings in gMock.
#include "iwdg_interface.h"

class MockIWDG : public IWDGInterface {
 public:

  MOCK_METHOD(bool, watchdogInit, (uint32_t timeout), (override));
  MOCK_METHOD(bool, watchdogInit, (uint32_t counter_timeout, uint32_t window_timeout), (override));
  MOCK_METHOD(bool, refreshWatchdog, (), (override));

};