#include "Scheduler.h"

Scheduler::Scheduler(void (*func)(),long millisUpdate){
  toCall = func;
  updateIntervalMillis = millisUpdate;
  lastUpdateMillis = millis();
}

void Scheduler::update(){
  if(millis() - lastUpdateMillis >= updateIntervalMillis){
    toCall();
    lastUpdateMillis = millis();
  }
}
