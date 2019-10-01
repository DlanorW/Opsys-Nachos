#include "copyright.h"
#include <stdio.h>
#include "system.h"
#include "thread.h"

extern char* ThreadStatusName[4];
extern Thread* tGroup[TIDSize];

void ThreadsStatus()
{
    for(int i=0;i<TIDSize;++i){
        if(tGroup[i]!=NULL){
            printf("The status of thread tid=%d is %s\n", i, 
                   ThreadStatusName[tGroup[i]->getStatus()]);
        }
    }
    return;
}
