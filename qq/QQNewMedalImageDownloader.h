//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IAsynDownloadImageObserver-Protocol.h>

@class NSMutableArray, NSString;

@interface QQNewMedalImageDownloader : NSObject <IAsynDownloadImageObserver>
{
    _Bool _downloadAllImagesSuccess;
    NSMutableArray *_urls;
}

@property(nonatomic) _Bool downloadAllImagesSuccess; // @synthesize downloadAllImagesSuccess=_downloadAllImagesSuccess;
@property(retain, nonatomic) NSMutableArray *urls; // @synthesize urls=_urls;
- (void).cxx_destruct;
- (void)downLoadImageFail:(id)arg1;
- (void)downloadImageFinished:(id)arg1;
- (void)startDownloadUrls:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

