#ifndef MonomerMover_h
#define MonomerMover_h

class MCMCSimulator;

class MonomerMover {

 public:

    virtual void MonomerMover();

 private:

    virtual void move(void  angle);

 public:

    MCMCSimulator *myMCMCSimulator;
};

#endif // MonomerMover_h
