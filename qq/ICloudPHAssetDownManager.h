//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ICloudPHAssetDownManager : NSObject
{
    NSMutableDictionary *_downloadingDic;
    NSObject<OS_dispatch_queue> *_downQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *downQueue; // @synthesize downQueue=_downQueue;
@property(retain, nonatomic) NSMutableDictionary *downloadingDic; // @synthesize downloadingDic=_downloadingDic;
- (void).cxx_destruct;
- (void)removeDownloadPHAssetProgressCallback:(id)arg1 type:(int)arg2;
- (void)ifPHAssetDownloading:(id)arg1 type:(int)arg2 progressCallback:(CDUnknownBlockType)arg3 resultCallback:(CDUnknownBlockType)arg4;
- (void)downloadNextICloudPhasset;
- (void)startDownload:(id)arg1;
- (void)downloadPHAsset:(id)arg1 type:(int)arg2 progressCallback:(CDUnknownBlockType)arg3;
- (id)init;

@end

