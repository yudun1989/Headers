//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBHCBaseData.h"

@class NSNumber, NSString, WBUser;

@interface WBHCRankData : WBHCBaseData
{
    _Bool _isLiked;
    _Bool _hasSendMedal;
    int _likeCount;
    long long _stepCount;
    double _calorie;
    WBUser *_user;
    unsigned long long _category;
    NSString *_oid;
    unsigned long long _medalCount;
    unsigned long long _medalRank;
    unsigned long long _inviteCount;
    unsigned long long _inviteRemainCount;
    unsigned long long _myMedalIndex;
}

@property(nonatomic) unsigned long long myMedalIndex; // @synthesize myMedalIndex=_myMedalIndex;
@property(nonatomic) unsigned long long inviteRemainCount; // @synthesize inviteRemainCount=_inviteRemainCount;
@property(nonatomic) unsigned long long inviteCount; // @synthesize inviteCount=_inviteCount;
@property(nonatomic) unsigned long long medalRank; // @synthesize medalRank=_medalRank;
@property(nonatomic) _Bool hasSendMedal; // @synthesize hasSendMedal=_hasSendMedal;
@property(nonatomic) unsigned long long medalCount; // @synthesize medalCount=_medalCount;
@property(copy, nonatomic) NSString *oid; // @synthesize oid=_oid;
@property(nonatomic) int likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) _Bool isLiked; // @synthesize isLiked=_isLiked;
@property(nonatomic) unsigned long long category; // @synthesize category=_category;
@property(retain, nonatomic) WBUser *user; // @synthesize user=_user;
@property(nonatomic) double calorie; // @synthesize calorie=_calorie;
@property(nonatomic) long long stepCount; // @synthesize stepCount=_stepCount;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *numberValue;
@property(readonly, nonatomic) _Bool isValid;
- (_Bool)updateWithDictionary:(id)arg1;

@end

