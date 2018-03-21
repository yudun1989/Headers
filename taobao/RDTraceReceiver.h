//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBAccsInstruct;

@interface RDTraceReceiver : NSObject
{
    TBAccsInstruct *_aInstruct;
    double _beginTime;
    double _endTime;
    long long _seq;
}

+ (id)shareInstance;
@property(nonatomic) long long seq; // @synthesize seq=_seq;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(retain, nonatomic) TBAccsInstruct *aInstruct; // @synthesize aInstruct=_aInstruct;
- (void).cxx_destruct;
- (void)sendTraceCommandExecuteResultErrCode:(unsigned long long)arg1 andErrorMsg:(id)arg2;
- (void)sendAccsExecuteStateCode:(unsigned long long)arg1;
- (id)buildLogInstruct:(_Bool)arg1;
- (id)getTraceUrlParamsString;
- (id)getRuntimeInfo;
- (id)getDebugId;
- (void)setTraceDic:(id)arg1 category:(id)arg2;
- (_Bool)isEnableTLog;
- (_Bool)stopTrace;
- (void)startTrace;
- (void)changeTraceInfo:(id)arg1;
- (void)startTraceTimer;
- (void)checkInstructValue;
- (void)addMtopTraceWithDic:(id)arg1;
- (void)writeToTlogWithCategory:(id)arg1 debugId:(id)arg2 traceId:(id)arg3 content:(id)arg4;
- (id)init;

@end

