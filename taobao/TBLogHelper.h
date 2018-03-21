//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TLogBiz;

@interface TBLogHelper : NSObject
{
    TLogBiz *_logBiz;
    Class _alogClass;
    SEL _alogSel;
}

+ (id)GetInstance;
@property(nonatomic) SEL alogSel; // @synthesize alogSel=_alogSel;
@property(retain, nonatomic) Class alogClass; // @synthesize alogClass=_alogClass;
@property(retain, nonatomic) TLogBiz *logBiz; // @synthesize logBiz=_logBiz;
- (void).cxx_destruct;
- (void)logErrorMsg:(const char *)arg1 funcName:(const char *)arg2 line:(int)arg3 msg:(id)arg4;
- (void)logWarnMsg:(const char *)arg1 funcName:(const char *)arg2 line:(int)arg3 msg:(id)arg4;
- (void)logInfoMsg:(const char *)arg1 funcName:(const char *)arg2 line:(int)arg3 msg:(id)arg4;
- (void)logDebugMsg:(const char *)arg1 funcName:(const char *)arg2 line:(int)arg3 msg:(id)arg4;
- (void)showAssertAlert:(const char *)arg1 funcName:(const char *)arg2 line:(int)arg3 msg:(id)arg4;
- (id)init;

@end

