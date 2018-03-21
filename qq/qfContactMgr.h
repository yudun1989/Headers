//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, qfEngine;

@interface qfContactMgr : NSObject
{
    qfEngine *_ec;
    unsigned long long _sid;
    struct strutf8 _cookie;
    long long _mode;
    int _retries;
    unsigned long long _peer_transfering;
    long long _state;
    struct strutf8 _apName;
    int _pairKey;
    unsigned long long _peer_selected;
    struct taskScanContact tsk_scan_nb;
    struct taskScanContact tsk_scan_all;
}

@property unsigned long long peerSelected; // @synthesize peerSelected=_peer_selected;
@property int pairKey; // @synthesize pairKey=_pairKey;
@property(readonly) long long state; // @synthesize state=_state;
@property(readonly) long long mode; // @synthesize mode=_mode;
@property(readonly) unsigned long long peer; // @synthesize peer=_peer_transfering;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onRecvQRCodeRsp:(const struct qlEndpoint *)arg1 withInfo:(struct UserInfo *)arg2;
- (void)onRecvQRCode:(id)arg1 fromPeer:(const struct qlEndpoint *)arg2;
- (_Bool)onTransferDone:(_Bool)arg1;
- (id)onContactFoundFromNBN:(unsigned long long)arg1 withFrom:(const struct qlEndpoint *)arg2;
- (void)onNbContactActive:(unsigned long long)arg1;
- (void)onNbTimeout:(unsigned long long)arg1;
- (void)onContactPair:(const struct qlEndpoint *)arg1 withInfo:(struct UserInfo *)arg2 asResponse:(_Bool)arg3;
- (void)onPreTransferTimeout;
- (void)onContactDetect:(const struct qlEndpoint *)arg1 withInfo:(struct UserInfo *)arg2 asResponse:(_Bool)arg3;
- (void)onEndpointDetect:(const struct qlEndpoint *)arg1 withInfo:(struct UserInfo *)arg2 asResponse:(_Bool)arg3;
- (void)onNetworkChanged:(int)arg1;
- (id)onContactFoundFromLocalNetwork:(const struct qlEndpoint *)arg1 withInfo:(struct UserInfo *)arg2;
- (void)onContactExitFromLocalNetwork:(unsigned long long)arg1 withType:(int)arg2 withFrom:(const struct qlEndpoint *)arg3;
- (_Bool)pushQRCode:(id)arg1 toPeer:(unsigned long long)arg2;
- (_Bool)preTransfer:(unsigned long long)arg1;
- (void)stopDiscovering:(_Bool)arg1;
- (void)onLocalContactKeepalive;
- (void)scanContactsFromLocalNetwork:(const struct qfNetInfo *)arg1;
- (void)probeContact:(unsigned int)arg1;
- (void)startSearching;
- (void)startBeacon;
- (_Bool)start;
- (_Bool)getSelfUserInfo:(struct UserInfo *)arg1;
- (id)initWithEc:(id)arg1;
@property(readonly) NSString *apName;
@property(readonly) _Bool isScanning;

@end

