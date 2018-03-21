//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol DTSendMdObjFaildNotifyDelegate;

@interface DTPostMdObj : NSObject
{
    NSMutableDictionary *_timeObjDic;
    NSMutableArray *_indexArray;
    id <DTSendMdObjFaildNotifyDelegate> _sendObj;
    long long _timeInterval;
    long long _tryCount;
}

@property(nonatomic) long long tryCount; // @synthesize tryCount=_tryCount;
@property(nonatomic) long long timeInterval; // @synthesize timeInterval=_timeInterval;
@property(nonatomic) __weak id <DTSendMdObjFaildNotifyDelegate> sendObj; // @synthesize sendObj=_sendObj;
@property(retain, nonatomic) NSMutableArray *indexArray; // @synthesize indexArray=_indexArray;
@property(retain, nonatomic) NSMutableDictionary *timeObjDic; // @synthesize timeObjDic=_timeObjDic;
- (void).cxx_destruct;
- (id)dicObjWithBiz:(id)arg1;
- (void)stopSendAllMessage;
- (void)postObjDic:(id)arg1;
- (void)releaseSendPubMessageIndex:(id)arg1;
- (void)unRegister:(id)arg1;
- (void)sendMdObjDic:(id)arg1;
- (void)sendMdObj:(id)arg1 biz:(id)arg2 sendNum:(id)arg3;
- (id)initWith:(id)arg1;

@end

