//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QZUploadDelegate-Protocol.h>

@class NSMutableDictionary, NSString, QZJobManager, QZUploadManager;

@interface QZUploadDelegateDispatcher : NSObject <QZUploadDelegate>
{
    NSMutableDictionary *_delegateMap;
    QZJobManager *_uploadJobManager;
    QZUploadManager *_manager;
}

+ (id)preUploadSharedInstance;
+ (id)sharedInstance;
@property(retain, nonatomic) QZUploadManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)qzUpload:(long long)arg1 taskDetail:(id)arg2 Status:(long long)arg3;
- (void)qzUploadChanceToModify:(long long)arg1 taskDetail:(id)arg2;
- (void)qzUpload:(long long)arg1 taskDetail:(id)arg2 syncAlbumeName:(id)arg3;
- (void)qzUpload:(long long)arg1 taskDetail:(id)arg2 syncSrvTime:(long long)arg3;
- (void)qzUploadBegin:(long long)arg1 taskDetail:(id)arg2;
- (void)qzUploadFinish:(long long)arg1 taskDetail:(id)arg2;
- (void)qzUpload:(long long)arg1 taskDetail:(id)arg2 fail:(id)arg3;
- (void)qzUpload:(long long)arg1 taskDetail:(id)arg2 sucess:(id)arg3;
- (void)qzUpload:(long long)arg1 taskDetail:(id)arg2 recv:(long long)arg3 total:(long long)arg4;
- (void)unregisterDelegate:(id)arg1;
- (void)registerDelegate:(id)arg1 withOperationClass:(Class)arg2;
- (id)initWithJobManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

