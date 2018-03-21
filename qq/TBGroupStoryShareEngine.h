//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/TBBizNetworkLogicDelegate-Protocol.h>

@class NSString, QQLockDictionary;

@interface TBGroupStoryShareEngine : NSObject <TBBizNetworkLogicDelegate>
{
    QQLockDictionary *_forwardInfoDic;
}

+ (id)NTForwardGroupStoryResult;
+ (id)sharedInstance;
- (void)notifyForwardResult:(int)arg1 msgModel:(id)arg2;
- (void)forwardGroupStoryMessage:(id)arg1;
- (void)handleForwarGroupStoryReqModel:(id)arg1 rspModel:(id)arg2 userData:(id)arg3;
- (void)didRequestFail:(unsigned long long)arg1 requestModel:(id)arg2 error:(id)arg3;
- (void)didReceivedData:(unsigned long long)arg1 requestModel:(id)arg2 classModel:(id)arg3;
- (void)forwardGroupStoryShareVideos:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

