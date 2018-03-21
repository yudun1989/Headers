//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/BDHUploadDelegate-Protocol.h>
#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

@interface QQVipFunctionComicScreenshotUploadManager : NSObject <IEngineDispatchDelegate, BDHUploadDelegate>
{
    NSMutableDictionary *BDHUPloadSeq;
    NSMutableDictionary *uploadSeq;
}

+ (id)GetInstance;
- (void).cxx_destruct;
- (void)UploadComicScreenshotSucceedWithInfo:(id)arg1 statu:(int)arg2 uploadKey:(id)arg3;
- (void)notifyBDHFail:(long long)arg1 uploadDetail:(id)arg2 fail:(id)arg3;
- (void)notifyBDHSuccess:(long long)arg1 uploadDetail:(id)arg2;
- (void)notifyBDHProgress:(long long)arg1 uploadDetail:(id)arg2 progress:(float)arg3;
- (void)uploadComicScreenshotIfNeed:(CDStruct_7895f40e)arg1;
- (void)addOneComicScreenshotWithFilePath:(id)arg1 comicId:(id)arg2 picMd5:(id)arg3 actionData:(id)arg4;
- (_Bool)isUploadInfoAlreadyInBDHUPloadSeq:(id)arg1;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

