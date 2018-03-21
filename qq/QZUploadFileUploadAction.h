//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZUploadEventAction.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSTimer;

@interface QZUploadFileUploadAction : QZUploadEventAction
{
    NSDictionary *_packetDict;
    NSString *_currentIpKey;
    NSMutableArray *_packetQueue;
    long long _currentIndex;
    double _totalStart;
    NSMutableDictionary *_offsetStartDict;
    NSTimer *_netTimer;
}

@property(retain, nonatomic) NSTimer *netTimer; // @synthesize netTimer=_netTimer;
@property(retain, nonatomic) NSMutableDictionary *offsetStartDict; // @synthesize offsetStartDict=_offsetStartDict;
@property(nonatomic) double totalStart; // @synthesize totalStart=_totalStart;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSMutableArray *packetQueue; // @synthesize packetQueue=_packetQueue;
@property(retain, nonatomic) NSString *currentIpKey; // @synthesize currentIpKey=_currentIpKey;
@property(retain, nonatomic) NSDictionary *packetDict; // @synthesize packetDict=_packetDict;
- (void).cxx_destruct;
- (_Bool)shouldActionEnd;
- (void)retryAllPacketWithRequest:(id)arg1 error:(id)arg2;
- (void)finishAllPacketWithRequest:(id)arg1 error:(id)arg2;
- (void)finishAction:(id)arg1;
- (long long)type;
- (void)updateNetTimerForRequest:(id)arg1;
- (void)didNetTimerTimeout:(id)arg1;
- (void)invalidNetTimer;
- (void)handleFileCanceledWithRequest:(id)arg1 param:(id)arg2;
- (void)handleNetChangeWithRequest:(id)arg1 netStatus:(unsigned long long)arg2;
- (void)handleSocketDisconnectWithRequest:(id)arg1 error:(id)arg2 connection:(id)arg3;
- (void)recordFileSliceTime:(long long)arg1 packetTag:(id)arg2 request:(id)arg3;
- (void)checkActionEndWithRequest:(id)arg1;
- (id)getNextPacketToSendAndRecordTag:(id *)arg1;
- (void)startNextPacketWithRequest:(id)arg1 connection:(id)arg2;
- (void)handleDataReadWithRequest:(id)arg1 data:(id)arg2 connection:(id)arg3;
- (id)loadFileData:(unsigned long long)arg1 Len:(long long)arg2 filePath:(id)arg3;
- (id)sliceAndPackDataWithPacket:(id)arg1 request:(id)arg2;
- (void)handleDataReadyToWriteWithRequest:(id)arg1 connection:(id)arg2;
- (void)handleFileSliceInitWithRequest:(id)arg1 param:(id)arg2;
- (void)doActionWithRequest:(id)arg1 event:(long long)arg2 param:(id)arg3;

@end

