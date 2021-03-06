#define NEXT_SEG_FREE 0
#define NEXT_SEG_OCCUPIED 1
#define NEXT_SEG_STATION 2

void getRoute(Train* train);
void runSocketHandler(int, void*);
int checkNextMASegmentECTS1(MASegment);
int checkNextMASegmentECTS2(MASegment);
void enterMASegment(MASegment, int*);
void exitMASegment(MASegment, int*);
void fillTrain(Train*,char**);
void runTrain(Train*);
void logTrainStatus(int, MASegment, MASegment);

