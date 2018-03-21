//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/CSChannelDelegate-Protocol.h>

@class NSString, PLUploadShortVideoModel;
@protocol PLUploadFeedInfoDelegate;

@interface PLUploadShortRecordFeedLogic : NSObject <CSChannelDelegate>
{
    id <PLUploadFeedInfoDelegate> _delegate;
    PLUploadShortVideoModel *_shortVideoModel;
}

@property(retain, nonatomic) PLUploadShortVideoModel *shortVideoModel; // @synthesize shortVideoModel=_shortVideoModel;
@property(nonatomic) __weak id <PLUploadFeedInfoDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)errorCallback:(long long)arg1 errorMsg:(id)arg2;
- (void)onError:(id)arg1;
- (void)onReceviceData:(struct LCMessage *)arg1;
- (void)uploadFeedInfo:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

