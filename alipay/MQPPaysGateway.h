//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MQPServiceDelegate-Protocol.h"

@class MQPBaseService, MQPPaySession, NSCondition, NSMutableArray, NSString;
@protocol MQPPaysGatewayDelegate;

@interface MQPPaysGateway : NSObject <MQPServiceDelegate>
{
    _Bool _stopPayIn3S;
    NSMutableArray *_services;
    MQPBaseService *_vrpayservice;
    id <MQPPaysGatewayDelegate> _delegate;
    CDUnknownBlockType _queryTidBlock;
    NSCondition *_tidCondition;
    MQPPaySession *_stashedSession;
}

@property(retain, nonatomic) MQPPaySession *stashedSession; // @synthesize stashedSession=_stashedSession;
@property(nonatomic) _Bool stopPayIn3S; // @synthesize stopPayIn3S=_stopPayIn3S;
@property(retain, nonatomic) NSCondition *tidCondition; // @synthesize tidCondition=_tidCondition;
@property(copy, nonatomic) CDUnknownBlockType queryTidBlock; // @synthesize queryTidBlock=_queryTidBlock;
@property(nonatomic) __weak id <MQPPaysGatewayDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak MQPBaseService *vrpayservice; // @synthesize vrpayservice=_vrpayservice;
@property(retain, nonatomic) NSMutableArray *services; // @synthesize services=_services;
- (void).cxx_destruct;
- (void)onGentid;
- (void)queryTid;
- (void)resetTid;
- (id)queryTidFactor:(int)arg1;
- (void)service:(id)arg1 callAlipay:(id)arg2;
- (void)service:(id)arg1 callWapWithUrl:(id)arg2;
- (void)exitAll;
- (void)service:(id)arg1 finishedWithInfo:(id)arg2;
- (void)resetAllService;
- (void)clearAllService;
- (void)clearServiceByName:(id)arg1;
- (id)findServiceWithName:(id)arg1;
- (id)createService:(id)arg1 withSession:(id)arg2;
- (void)switchToService:(id)arg1 message:(id)arg2;
- (void)goBackSession:(id)arg1 withResult:(id)arg2;
- (_Bool)checkRunning;
- (void)reset;
- (void)fetchDataWithParam:(id)arg1;
- (_Bool)checkIfResumeOrder:(id)arg1;
- (_Bool)checkOrder:(id)arg1;
- (void)payWithOrder:(id)arg1 msgType:(id)arg2 extraParams:(id)arg3 callback:(id)arg4;
- (void)performURLAction:(id)arg1;
@property(readonly, nonatomic) MQPPaySession *currentPaySession;
@property(readonly, nonatomic) MQPPaySession *currentSession;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

