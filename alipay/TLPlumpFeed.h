//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class APContactInfo, NSArray, NSMutableArray, TLFeed, TLScene;

@interface TLPlumpFeed : NSObject
{
    TLFeed *_baseFeed;
    APContactInfo *_contactInfo;
    NSMutableArray *_commentList;
    NSMutableArray *_praiseList;
    NSMutableArray *_rewardList;
    TLScene *_scene;
    NSArray *_hintsContactList;
}

@property(retain, nonatomic) NSArray *hintsContactList; // @synthesize hintsContactList=_hintsContactList;
@property(retain, nonatomic) TLScene *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSMutableArray *rewardList; // @synthesize rewardList=_rewardList;
@property(retain, nonatomic) NSMutableArray *praiseList; // @synthesize praiseList=_praiseList;
@property(retain, nonatomic) NSMutableArray *commentList; // @synthesize commentList=_commentList;
@property(retain, nonatomic) APContactInfo *contactInfo; // @synthesize contactInfo=_contactInfo;
@property(retain, nonatomic) TLFeed *baseFeed; // @synthesize baseFeed=_baseFeed;
- (void).cxx_destruct;
- (id)hintsText;
- (_Bool)hasHints;
- (id)copy;
- (id)init;
- (id)giftButtonChatScheme;
- (id)giftButtonScheme;
- (id)giftButtonTitle;
- (_Bool)hasGiftButton;
- (void)updateWithLFCNewsfeedDetailInfo:(id)arg1;
- (_Bool)hasOptions;
- (_Bool)hasPraiseAndReward;
- (_Bool)hasPraiseReward;
- (_Bool)praisedByMe;
- (_Bool)canReward:(long long *)arg1 denyMemo:(id *)arg2;
- (id)myPraisePlumpOption;
- (id)rewardOptionModel;
- (id)commentOptionModel;
- (id)favOptionModel;

@end

