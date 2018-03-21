//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSMutableArray, NSNumber, NSString;
@protocol GXActionScriptDelegate;

@interface GXActionScript : NSObject
{
    NSNumber *entranceActionId_;
    NSDictionary *actions_;
    NSMutableArray *actionPath_;
    id <GXActionScriptDelegate> delegate_;
    _Bool _running;
    _Bool _isOfflineMsg;
    NSString *_appId;
    NSString *_msgId;
    NSString *_cmdId;
    NSString *_taskId;
    NSData *_storedMsgData;
}

+ (id)interpret:(id)arg1 error:(id *)arg2;
@property(nonatomic) _Bool isOfflineMsg; // @synthesize isOfflineMsg=_isOfflineMsg;
@property(nonatomic) _Bool running; // @synthesize running=_running;
@property(retain, nonatomic) NSData *storedMsgData; // @synthesize storedMsgData=_storedMsgData;
@property(readonly, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(readonly, nonatomic) NSString *cmdId; // @synthesize cmdId=_cmdId;
@property(readonly, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
@property(readonly, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (void)doNextAction:(id)arg1;
- (void)feedback:(id)arg1 actionId:(long long)arg2 result:(id)arg3 doNext:(_Bool)arg4;
- (void)run:(id)arg1;
- (void)dealloc;
- (id)initWithActions:(id)arg1 entanceActionId:(id)arg2 details:(id)arg3;

@end

