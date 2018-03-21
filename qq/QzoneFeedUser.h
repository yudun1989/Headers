//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QzoneModel.h>

@class NSArray, NSMutableDictionary, NSString, QZJFeedsSMedal, QzoneCommStarInfo;

@interface QzoneFeedUser : QzoneModel
{
    int _enumUserType;
    long long _displayFlag;
    QZJFeedsSMedal *_feedsMedal;
}

@property(nonatomic) int enumUserType; // @synthesize enumUserType=_enumUserType;
@property(retain, nonatomic) QZJFeedsSMedal *feedsMedal; // @synthesize feedsMedal=_feedsMedal;
@property(nonatomic) long long displayFlag; // @synthesize displayFlag=_displayFlag;
- (void).cxx_destruct;
- (_Bool)isShowNormalSpaceIcon;
- (_Bool)isShowFamousSpaceIconInGroup;
- (_Bool)isShowFamousSpaceIcon;
- (_Bool)isShowStarVip;
- (_Bool)isShowVip;
- (id)encodeAtString:(id)arg1;
- (id)getAtStringIsTarget:(_Bool)arg1;
- (void)setVipLevel:(long long)arg1;
- (long long)vipLevel;
- (void)setIsAnnualVip:(_Bool)arg1;
- (_Bool)isAnnualVip;
- (_Bool)isVip;
- (_Bool)isFromPenyou;
- (_Bool)isFromQzone;

// Remaining properties
@property(nonatomic) long long actiontype; // @dynamic actiontype;
@property(retain, nonatomic) NSString *actionurl; // @dynamic actionurl;
@property(nonatomic) long long coverRatio; // @dynamic coverRatio;
@property(retain, nonatomic) NSString *descIconURL; // @dynamic descIconURL;
@property(retain, nonatomic) NSMutableDictionary *extraInfo; // @dynamic extraInfo;
@property(nonatomic) long long from; // @dynamic from;
@property(nonatomic) long long iCurUserType; // @dynamic iCurUserType;
@property(nonatomic) unsigned long long iconHeight; // @dynamic iconHeight;
@property(nonatomic) unsigned long long iconWidth; // @dynamic iconWidth;
@property(nonatomic) _Bool isAnnual; // @dynamic isAnnual;
@property(nonatomic) _Bool isCmtVerifyOpen; // @dynamic isCmtVerifyOpen;
@property(nonatomic) int isFamousWhite; // @dynamic isFamousWhite;
@property(nonatomic) _Bool isOwn; // @dynamic isOwn;
@property(nonatomic) _Bool isOwner; // @dynamic isOwner;
@property(nonatomic) _Bool isSafeModeUser; // @dynamic isSafeModeUser;
@property(nonatomic) _Bool isSetNickGlint; // @dynamic isSetNickGlint;
@property(nonatomic) _Bool isSuperLike; // @dynamic isSuperLike;
@property(nonatomic) long long isSweetVip; // @dynamic isSweetVip;
@property(nonatomic) long long level; // @dynamic level;
@property(retain, nonatomic) NSString *logo; // @dynamic logo;
@property(copy, nonatomic) NSString *medalJumpUrl; // @dynamic medalJumpUrl;
@property(nonatomic) long long medalLevel; // @dynamic medalLevel;
@property(copy, nonatomic) NSString *medalPicUrl; // @dynamic medalPicUrl;
@property(nonatomic) long long medalState; // @dynamic medalState;
@property(nonatomic) long long medalType; // @dynamic medalType;
@property(nonatomic) unsigned long long nickShimmeringCount; // @dynamic nickShimmeringCount;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(nonatomic) int operationMask; // @dynamic operationMask;
@property(nonatomic) long long portraitId; // @dynamic portraitId;
@property(nonatomic) long long qzoneUserActiveLevel; // @dynamic qzoneUserActiveLevel;
@property(retain, nonatomic) NSString *qzonedesc; // @dynamic qzonedesc;
@property(retain, nonatomic) QzoneCommStarInfo *starVipInfo; // @dynamic starVipInfo;
@property(retain, nonatomic) NSString *strPortraitId; // @dynamic strPortraitId;
@property(retain, nonatomic) NSArray *tagInfos; // @dynamic tagInfos;
@property(copy, nonatomic) NSString *talkID; // @dynamic talkID;
@property(nonatomic) long long timestamp; // @dynamic timestamp;
@property(nonatomic) long long uFansCount; // @dynamic uFansCount;
@property(nonatomic) long long uVisitorCount; // @dynamic uVisitorCount;
@property(retain, nonatomic) NSString *uid; // @dynamic uid;
@property(nonatomic) long long uin; // @dynamic uin;
@property(retain, nonatomic) NSString *uinkey; // @dynamic uinkey;
@property(retain, nonatomic) NSString *underNicknameDesc; // @dynamic underNicknameDesc;
@property(nonatomic) long long vip; // @dynamic vip;
@property(nonatomic) long long vipShowType; // @dynamic vipShowType;
@property(nonatomic) long long viptype; // @dynamic viptype;

@end

