//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class HTSProfileActivityModel, HTSSettingsEncryptModel, NSArray, NSNumber, NSString;

@interface HTSAppSettingsModel : MTLModel <MTLJSONSerializing>
{
    _Bool _reportCrashAction;
    _Bool _guestPhotoButtonShow;
    _Bool _networkLibUpgrade;
    _Bool _showCommentAlert;
    _Bool _enableMusicSearch;
    _Bool _enableProfileUserRecommend;
    int _pushFreq;
    int _pushDenyThreshold;
    int _pushCandidateFreq;
    int _videoDurationLimit;
    NSNumber *_HTTP_RETRY_COUNT;
    NSNumber *_HTTP_RETRY_INTERVAL;
    NSNumber *_HTTP_TIMEOUT;
    HTSSettingsEncryptModel *_encryptModel;
    HTSProfileActivityModel *_profileActivity;
    long long _videoSlideAction;
    long long _videoFollowGuide;
    long long _liveFeedStyle;
    unsigned long long _loginBtnStyle;
    unsigned long long _followBadgePriority;
    NSArray *_settingGuideList;
    unsigned long long _videoPlayerType;
    unsigned long long _launchPositionAB;
    unsigned long long _videoSlideControl;
    NSNumber *_isFakeVersion;
    NSArray *_musicFilterTitles;
    NSArray *_musicFilterAuthors;
}

+ (id)settingGuideListJSONTransformer;
+ (id)encryptModelJSONTransformer;
+ (id)profileActivityJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool enableProfileUserRecommend; // @synthesize enableProfileUserRecommend=_enableProfileUserRecommend;
@property(retain, nonatomic) NSArray *musicFilterAuthors; // @synthesize musicFilterAuthors=_musicFilterAuthors;
@property(retain, nonatomic) NSArray *musicFilterTitles; // @synthesize musicFilterTitles=_musicFilterTitles;
@property(nonatomic) _Bool enableMusicSearch; // @synthesize enableMusicSearch=_enableMusicSearch;
@property(nonatomic) _Bool showCommentAlert; // @synthesize showCommentAlert=_showCommentAlert;
@property(retain, nonatomic) NSNumber *isFakeVersion; // @synthesize isFakeVersion=_isFakeVersion;
@property(nonatomic) unsigned long long videoSlideControl; // @synthesize videoSlideControl=_videoSlideControl;
@property(nonatomic) unsigned long long launchPositionAB; // @synthesize launchPositionAB=_launchPositionAB;
@property(nonatomic) unsigned long long videoPlayerType; // @synthesize videoPlayerType=_videoPlayerType;
@property(nonatomic) _Bool networkLibUpgrade; // @synthesize networkLibUpgrade=_networkLibUpgrade;
@property(copy, nonatomic) NSArray *settingGuideList; // @synthesize settingGuideList=_settingGuideList;
@property(nonatomic) unsigned long long followBadgePriority; // @synthesize followBadgePriority=_followBadgePriority;
@property(nonatomic) unsigned long long loginBtnStyle; // @synthesize loginBtnStyle=_loginBtnStyle;
@property(nonatomic) _Bool guestPhotoButtonShow; // @synthesize guestPhotoButtonShow=_guestPhotoButtonShow;
@property(nonatomic) long long liveFeedStyle; // @synthesize liveFeedStyle=_liveFeedStyle;
@property(nonatomic) _Bool reportCrashAction; // @synthesize reportCrashAction=_reportCrashAction;
@property(nonatomic) int videoDurationLimit; // @synthesize videoDurationLimit=_videoDurationLimit;
@property(nonatomic) int pushCandidateFreq; // @synthesize pushCandidateFreq=_pushCandidateFreq;
@property(nonatomic) int pushDenyThreshold; // @synthesize pushDenyThreshold=_pushDenyThreshold;
@property(nonatomic) int pushFreq; // @synthesize pushFreq=_pushFreq;
@property(nonatomic) long long videoFollowGuide; // @synthesize videoFollowGuide=_videoFollowGuide;
@property(nonatomic) long long videoSlideAction; // @synthesize videoSlideAction=_videoSlideAction;
@property(retain, nonatomic) HTSProfileActivityModel *profileActivity; // @synthesize profileActivity=_profileActivity;
@property(retain, nonatomic) HTSSettingsEncryptModel *encryptModel; // @synthesize encryptModel=_encryptModel;
@property(retain, nonatomic) NSNumber *HTTP_TIMEOUT; // @synthesize HTTP_TIMEOUT=_HTTP_TIMEOUT;
@property(retain, nonatomic) NSNumber *HTTP_RETRY_INTERVAL; // @synthesize HTTP_RETRY_INTERVAL=_HTTP_RETRY_INTERVAL;
@property(retain, nonatomic) NSNumber *HTTP_RETRY_COUNT; // @synthesize HTTP_RETRY_COUNT=_HTTP_RETRY_COUNT;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

