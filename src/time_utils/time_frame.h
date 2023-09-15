#ifndef TIME_FRAME_H
#define TIME_FRAME_H

typedef struct {
	double accumulator;
	double deltaTime;
	int previousTime;
	int currentTime;
} TimeFrame;

void TimeFrameInit(TimeFrame* timeFrame);
void TimeFrameUpdate(TimeFrame* timeFrame, int newTime);

#endif
