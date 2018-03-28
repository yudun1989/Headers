//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTVDetailRelatedRecommendCellViewModelProtocol-Protocol.h"

@class NSNumber, NSString, TTVDetailFollowUserRecommendInfoModel;

@interface TTVDetailRelatedRecommendCellViewModel : NSObject <TTVDetailRelatedRecommendCellViewModelProtocol>
{
    TTVDetailFollowUserRecommendInfoModel *_infoModel;
}

@property(retain, nonatomic) TTVDetailFollowUserRecommendInfoModel *infoModel; // @synthesize infoModel=_infoModel;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *isFollowing;
@property(retain, nonatomic) NSNumber *isFollowed;
@property(retain, nonatomic) NSNumber *isFriend;
@property(readonly, nonatomic) NSString *recommendReason;
@property(readonly, nonatomic) NSNumber *recommendType;
@property(readonly, nonatomic) NSString *schema;
@property(readonly, nonatomic) NSString *avatarUrl;
@property(readonly, nonatomic) NSString *desc;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *userAuthInfo;
@property(readonly, nonatomic) NSString *userId;
@property(readonly, nonatomic) NSString *userDecoration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

