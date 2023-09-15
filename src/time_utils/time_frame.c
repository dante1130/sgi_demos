#include "time_frame.h"

void TimeFrameInit(TimeFrame* timeFrame) {
	timeFrame->deltaTime = 0.0;
	timeFrame->previousTime = 0.0;
	timeFrame->currentTime = 0.0;
}

void TimeFrameUpdate(TimeFrame* timeFrame, int newTime) {
	timeFrame->previousTime = timeFrame->currentTime;
	timeFrame->currentTime = newTime;
	timeFrame->deltaTime =
	    (timeFrame->currentTime - timeFrame->previousTime) / 1000.0;
}
