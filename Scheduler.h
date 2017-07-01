#ifndef SCHEDULER_h
#define SCHEDULER_h

class Scheduler{
public:
  Scheduler(void (*func)(), long millisUpdate);
  void update();
private:
  long lastUpdateMillis;
  void (*toCall)();
  long updateIntervalMillis;
};


#endif
