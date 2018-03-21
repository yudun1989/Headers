//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSLock.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary;

@interface _priv_NBSLens_webViewDataManager : NSLock
{
    NSMutableArray *jsErrors;
    NSMutableArray *pfmDatas;
    NSDictionary *private_buf_postData;
    struct dispatch_queue_s *queue;
    NSMutableDictionary *jsErrorsAfterLoad;
    NSMutableDictionary *jsErrorsBeforeLoad;
}

+ (id)singletonObject;
- (void).cxx_destruct;
- (id)renderJSErrorBeforeLoad;
- (void)logWebPerformance:(id)arg1;
- (void)logJSExceptionAfterLoad:(id)arg1;
- (void)logJSExceptionBeforeLoad:(id)arg1;
- (void)postToServer;
- (id)getPostData;
- (void)dealloc;
- (id)init;
- (void)onNotification_post:(id)arg1;
- (void)handleMemoryWarning;

@end

