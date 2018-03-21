//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate, NSDictionary, NSString;

@interface TLScene : NSObject <NSCoding>
{
    int _actCount;
    int _actFriendCount;
    int _viewCount;
    int _rewardCount;
    NSString *_sceneId;
    NSString *_type;
    NSString *_title;
    NSString *_address;
    NSString *_userId;
    NSString *_userLoginId;
    NSString *_scheme;
    NSString *_coverUri;
    NSString *_content;
    NSString *_currentFeedId;
    NSString *_hisotryFeedId;
    NSString *_officialFeedId;
    NSString *_friendFeedId;
    NSString *_status;
    NSString *_publishable;
    NSString *_descriptionUrl;
    NSString *_chatFlowSwitch;
    NSDate *_modifyDate;
    NSDictionary *_coverInfo;
    NSString *_tips;
    NSString *_actIcon;
    NSString *_actText;
    NSString *_actBackground;
    NSString *_actAboutUrl;
    NSString *_actAboutTitle;
    NSString *_actRelativeSceneId;
}

@property(retain, nonatomic) NSString *actRelativeSceneId; // @synthesize actRelativeSceneId=_actRelativeSceneId;
@property(retain, nonatomic) NSString *actAboutTitle; // @synthesize actAboutTitle=_actAboutTitle;
@property(retain, nonatomic) NSString *actAboutUrl; // @synthesize actAboutUrl=_actAboutUrl;
@property(retain, nonatomic) NSString *actBackground; // @synthesize actBackground=_actBackground;
@property(retain, nonatomic) NSString *actText; // @synthesize actText=_actText;
@property(retain, nonatomic) NSString *actIcon; // @synthesize actIcon=_actIcon;
@property(retain, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(nonatomic) int rewardCount; // @synthesize rewardCount=_rewardCount;
@property(nonatomic) int viewCount; // @synthesize viewCount=_viewCount;
@property(retain, nonatomic) NSDictionary *coverInfo; // @synthesize coverInfo=_coverInfo;
@property(nonatomic) int actFriendCount; // @synthesize actFriendCount=_actFriendCount;
@property(nonatomic) int actCount; // @synthesize actCount=_actCount;
@property(retain, nonatomic) NSDate *modifyDate; // @synthesize modifyDate=_modifyDate;
@property(retain, nonatomic) NSString *chatFlowSwitch; // @synthesize chatFlowSwitch=_chatFlowSwitch;
@property(retain, nonatomic) NSString *descriptionUrl; // @synthesize descriptionUrl=_descriptionUrl;
@property(retain, nonatomic) NSString *publishable; // @synthesize publishable=_publishable;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *friendFeedId; // @synthesize friendFeedId=_friendFeedId;
@property(retain, nonatomic) NSString *officialFeedId; // @synthesize officialFeedId=_officialFeedId;
@property(retain, nonatomic) NSString *hisotryFeedId; // @synthesize hisotryFeedId=_hisotryFeedId;
@property(retain, nonatomic) NSString *currentFeedId; // @synthesize currentFeedId=_currentFeedId;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *coverUri; // @synthesize coverUri=_coverUri;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSString *userLoginId; // @synthesize userLoginId=_userLoginId;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *sceneId; // @synthesize sceneId=_sceneId;
- (void).cxx_destruct;
- (id)copy;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithLFCActivityBriefExtInfo:(id)arg1;
- (void)updateWithLFCActivityBriefInfo:(id)arg1;

@end

