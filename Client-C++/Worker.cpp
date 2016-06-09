#include "Worker.h"
#include <iostream>
#include <string>

using namespace std;

void Worker::run()
{
    do{
        char len[4];
        cin.read(len, 4);
        unsigned int ilen = *reinterpret_cast<unsigned int *>(len);
        char *inMsg = new char[ilen];
        memset(inMsg,0,ilen+1);
        cin.read(inMsg, ilen);
        string inStr(inMsg);
        delete[] inMsg;
        QString sline(inStr.c_str());
        emit UpdateMessage(sline);
    }while(true);
}