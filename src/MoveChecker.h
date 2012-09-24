#ifndef MoveChecker_h
#define MoveChecker_h

class MCMCSimulator;

class MoveChecker {

 public:

    virtual void MoveChecker(void  slabSpacing, void  bondLength);

    virtual void checkProposedMove(void  Polymer);

 public:

    MCMCSimulator *myMCMCSimulator;
};

#endif // MoveChecker_h
