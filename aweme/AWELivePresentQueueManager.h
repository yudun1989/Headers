//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AWELiveBigPresentQueueManager, AWELiveSmallPresentQueueManager, AWELiveStickerPresentQueueManager, NSArray;
@protocol AWELivePresentQueueManagerDelegate;

@interface AWELivePresentQueueManager : NSObject
{
    id <AWELivePresentQueueManagerDelegate> _delegate;
    AWELiveSmallPresentQueueManager *_smallQueue;
    AWELiveBigPresentQueueManager *_bigQueue;
    AWELiveStickerPresentQueueManager *_stickerQueue;
    NSArray *_sandBoxPresentList;
}

@property(retain, nonatomic) NSArray *sandBoxPresentList; // @synthesize sandBoxPresentList=_sandBoxPresentList;
@property(retain, nonatomic) AWELiveStickerPresentQueueManager *stickerQueue; // @synthesize stickerQueue=_stickerQueue;
@property(retain, nonatomic) AWELiveBigPresentQueueManager *bigQueue; // @synthesize bigQueue=_bigQueue;
@property(retain, nonatomic) AWELiveSmallPresentQueueManager *smallQueue; // @synthesize smallQueue=_smallQueue;
@property(nonatomic) __weak id <AWELivePresentQueueManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleDidFetchSandBoxGiftListNoti:(id)arg1;
- (id)fakeLocalPresentFromPresent:(id)arg1;
- (_Bool)_fillLocalPresent:(id)arg1;
- (void)_enqueueLocalPresent:(id)arg1;
- (void)_prefetchResourceForPresent:(id)arg1;
- (void)_prefetchPresentListWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)clear;
- (id)topStickerPresent;
- (id)topBigPresent;
- (id)topSmallPresentAtChannel:(long long)arg1;
- (void)dequeueLocalPresent:(id)arg1;
- (void)enqueueLocalPresent:(id)arg1;
- (void)configWithSandBoxPresentList:(id)arg1;
- (void)configChannelCount:(long long)arg1;
- (void)dealloc;
- (id)init;

@end

