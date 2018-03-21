//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface QQVIPFunctionHttpAnalyser : NSObject
{
    NSDictionary *_currentUserLogConfig;
    NSString *_currentRequestUin;
    _Bool _logChangeOn;
    int _xo;
}

+ (id)getInstance;
@property(nonatomic) _Bool logChangeOn; // @synthesize logChangeOn=_logChangeOn;
@property(retain, nonatomic) NSString *currentRequestUin; // @synthesize currentRequestUin=_currentRequestUin;
@property(retain, nonatomic) NSDictionary *currentUserLogConfig; // @synthesize currentUserLogConfig=_currentUserLogConfig;
- (void)saveCurrentUserLogConfig:(id)arg1;
- (id)getCurrentUserLogConfig;
- (void)notifyRespPBBuffer:(const void *)arg1 size:(int)arg2 result:(int)arg3;
- (void)getReqPBBuffer:(char **)arg1 buffEnd:(char **)arg2;
- (void)unRegisterDelegate;
- (void)registerDelegate;
- (void)logRequest:(id)arg1 response:(id)arg2 topWebViewUrl:(id)arg3 topLoadingUrl:(id)arg4 isOffline:(_Bool)arg5 version:(long long)arg6 beginTime:(double)arg7 endTime:(double)arg8 error:(id)arg9;
- (_Bool)shouldReportLogForUrl:(id)arg1;
- (id)shouldReportLogForCurrentUserNumResult;
- (_Bool)shouldReportLogForCurrentUser;
- (void)createFileIfNeeded;
- (void)dealloc;
- (id)init;

@end

