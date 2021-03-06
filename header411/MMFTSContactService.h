//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMessageExt.h"
#import "MMService.h"

@class FIFOQueue, NSMutableDictionary, NSRecursiveLock, NSString;

@interface MMFTSContactService : MMService <IMessageExt, MMService>
{
    NSMutableDictionary *_taskDict;
    NSRecursiveLock *_m_oLock;
    FIFOQueue *_m_taskQueue;
}

@property(retain, nonatomic) FIFOQueue *m_taskQueue; // @synthesize m_taskQueue=_m_taskQueue;
@property(retain, nonatomic) NSRecursiveLock *m_oLock; // @synthesize m_oLock=_m_oLock;
@property(retain, nonatomic) NSMutableDictionary *taskDict; // @synthesize taskDict=_taskDict;
- (void).cxx_destruct;
- (void)onAddMsg:(id)arg1 msgData:(id)arg2;
- (void)AddGetContactTask:(id)arg1 msgData:(id)arg2;
- (void)CheckGetContactTask;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

