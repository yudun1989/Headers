//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSURLConnectionDataDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface QQGTMediaUploadManager : NSObject <NSURLConnectionDataDelegate>
{
    NSMutableDictionary *_mediaCache;
    NSMutableArray *_taskCache;
}

- (void)cancelAllTasks;
- (void)cancelUploadMediaFile:(id)arg1;
- (id)getMediaOnlineUrlForFile:(id)arg1 forType:(int)arg2;
- (_Bool)uploadMediaFile:(id)arg1 forType:(int)arg2 cgiArgu:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)removeTaskForKey:(id)arg1;
- (void)addTask:(id)arg1 ForKey:(id)arg2;
- (id)findTaskForFile:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
