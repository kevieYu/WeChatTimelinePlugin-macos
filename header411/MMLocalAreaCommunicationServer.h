//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LocalAreaNetworkServerDelegate.h"
#import "LocalAreaPeerServerDelegate.h"

@class LocalAreaNetworkServer, LocalAreaPeerServer, MMTimer, NSString;

@interface MMLocalAreaCommunicationServer : NSObject <LocalAreaPeerServerDelegate, LocalAreaNetworkServerDelegate>
{
    LocalAreaPeerServer *m_peerServer;
    LocalAreaNetworkServer *m_networkServer;
    unsigned long long m_transferType;
    MMTimer *m_autoReconnectTimeExceedTimer;
    BOOL m_reconnectTimeExceed;
    MMTimer *m_autoReconnectPollingTimer;
    NSString *phoneType;
    BOOL _autoReconnectSucc;
    BOOL _isPhoneSupportAutoReconnect;
    BOOL _isIntentDisconnect;
    int _backupMode;
    id <LocalAreaCommunicationServerDelegate> _delegate;
}

@property(nonatomic) int backupMode; // @synthesize backupMode=_backupMode;
@property(nonatomic) BOOL isIntentDisconnect; // @synthesize isIntentDisconnect=_isIntentDisconnect;
@property(nonatomic) BOOL isPhoneSupportAutoReconnect; // @synthesize isPhoneSupportAutoReconnect=_isPhoneSupportAutoReconnect;
@property(nonatomic) BOOL autoReconnectSucc; // @synthesize autoReconnectSucc=_autoReconnectSucc;
@property(nonatomic) __weak id <LocalAreaCommunicationServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setAutoReconnectTimeExceed;
- (void)tryAutoReconnect;
- (void)onPeerDisconnect;
- (void)onPeerConnected;
- (void)onPeerReciveData:(id)arg1;
- (void)onNetworkDisconnect;
- (void)onNetworkConnected;
- (void)onNetworkReciveData:(id)arg1 andLength:(unsigned int)arg2;
- (unsigned long long)getServerOpenTime;
- (unsigned long long)getTotalReceiveLength;
- (unsigned long long)getTotalSendLength;
- (float)getServerReceiveSpeed;
- (float)getServerSendSpeed;
- (unsigned long long)serverSendData:(id)arg1 andLength:(unsigned int)arg2;
- (void)p_stopPeerServer;
- (void)p_stopNetworkServer;
- (void)stopServer;
- (void)startPeerServerWithServerID:(id)arg1 serverHello:(id)arg2 serverOK:(id)arg3;
- (void)startNetworkServer:(id *)arg1 port:(unsigned short *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

