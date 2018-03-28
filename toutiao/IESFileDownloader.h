//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSOperationQueue;

@interface IESFileDownloader : NSObject
{
    NSOperationQueue *_downloadQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSOperationQueue *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
- (void).cxx_destruct;
- (id)downloadFileWithRequests:(id)arg1 downloadPath:(id)arg2 downloadProgress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)downloadFileWithURLs:(id)arg1 downloadPath:(id)arg2 downloadProgress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setMaxConcurrentCount:(unsigned long long)arg1;
- (id)init;

@end
