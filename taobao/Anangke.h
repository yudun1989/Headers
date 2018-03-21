//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol OS_dispatch_source;

@interface Anangke : NSObject
{
    id _uploader;
    NSString *_server;
    NSString *_token;
    NSObject<OS_dispatch_source> *_timer;
    NSString *_resultPath;
}

+ (id)shareInstance;
- (void)anangkeDo:(id)arg1;
- (void)anangkeStart;
- (void)anangkeStopCheck;
- (void)anangkeCheck;
- (void)anangkeUp;
- (void)uploadFile:(id)arg1 andUploadName:(id)arg2;
- (void)setEnv:(int)arg1;
- (long long)beginGetAndExec;
- (id)getTask:(id)arg1 andUploadName:(id)arg2;
- (id)UploadInfo:(long long *)arg1 andUploadError:(int)arg2;
- (long long)getPayloadFromServer:(id)arg1 andSize:(unsigned long long *)arg2;
- (long long)parsePayload:(void *)arg1 andSize:(unsigned long long)arg2 andMD5:(const char *)arg3 andBuffer:(long long *)arg4;
- (id)UploadDeviceInfo;
- (void)uploadErrorOrSucc:(long long *)arg1;
- (void)reportStatus:(long long *)arg1;
- (_Bool)connectedToNetwork;

@end

