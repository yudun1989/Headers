//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TTFHeartBeatStruct;

@interface TTFHeartBeatTrace : NSObject
{
    _Bool _isFromWs;
    int _htStatus;
    TTFHeartBeatStruct *_heartbeat;
    long long _activityId;
    long long _localTime;
    long long _htTime;
}

@property(nonatomic) int htStatus; // @synthesize htStatus=_htStatus;
@property(nonatomic) long long htTime; // @synthesize htTime=_htTime;
@property(nonatomic) long long localTime; // @synthesize localTime=_localTime;
@property(nonatomic) _Bool isFromWs; // @synthesize isFromWs=_isFromWs;
@property(nonatomic) long long activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) TTFHeartBeatStruct *heartbeat; // @synthesize heartbeat=_heartbeat;
- (void).cxx_destruct;
- (id)description;
- (id)traceDict;
- (id)initWithHeartBeat:(id)arg1;
- (id)init;

@end

