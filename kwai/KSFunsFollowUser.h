//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSSearchIndexable-Protocol.h"

@class KSUserVerifiedDetail, NSArray, NSDate, NSNumber, NSString;

@interface KSFunsFollowUser : NSObject <KSSearchIndexable>
{
    _Bool _myDisFollow;
    _Bool _otherIsFollow;
    _Bool _followRequesting;
    _Bool _isNewest;
    NSString *_sourceHead;
    NSArray *_sourceHeads;
    NSNumber *_sourceId;
    NSString *_sourceName;
    NSString *_sourceSex;
    NSString *_sourceUserText;
    NSNumber *_targetId;
    NSString *_targetHead;
    NSArray *_targetHeads;
    NSString *_targetName;
    NSString *_targetSex;
    NSString *_targetUserText;
    NSString *_followReason;
    NSNumber *_isFriend;
    NSString *_mobile_hash;
    NSNumber *_timestamp;
    NSDate *_date;
    NSNumber *_sourceSexValue;
    NSNumber *_targetSexValue;
    NSNumber *_isPrivacy;
    NSNumber *_isFollowing;
    NSNumber *_verified;
    KSUserVerifiedDetail *_verifiedDetail;
}

+ (_Bool)isPrivateSearchItem;
+ (id)searchDomainIdentifier;
@property(nonatomic) _Bool isNewest; // @synthesize isNewest=_isNewest;
@property(retain, nonatomic) KSUserVerifiedDetail *verifiedDetail; // @synthesize verifiedDetail=_verifiedDetail;
@property(retain, nonatomic) NSNumber *verified; // @synthesize verified=_verified;
@property(nonatomic) _Bool followRequesting; // @synthesize followRequesting=_followRequesting;
@property(retain, nonatomic) NSNumber *isFollowing; // @synthesize isFollowing=_isFollowing;
@property(retain, nonatomic) NSNumber *isPrivacy; // @synthesize isPrivacy=_isPrivacy;
@property(nonatomic) _Bool otherIsFollow; // @synthesize otherIsFollow=_otherIsFollow;
@property(nonatomic) _Bool myDisFollow; // @synthesize myDisFollow=_myDisFollow;
@property(retain, nonatomic) NSNumber *targetSexValue; // @synthesize targetSexValue=_targetSexValue;
@property(retain, nonatomic) NSNumber *sourceSexValue; // @synthesize sourceSexValue=_sourceSexValue;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *mobile_hash; // @synthesize mobile_hash=_mobile_hash;
@property(retain, nonatomic) NSNumber *isFriend; // @synthesize isFriend=_isFriend;
@property(retain, nonatomic) NSString *followReason; // @synthesize followReason=_followReason;
@property(retain, nonatomic) NSString *targetUserText; // @synthesize targetUserText=_targetUserText;
@property(retain, nonatomic) NSString *targetSex; // @synthesize targetSex=_targetSex;
@property(retain, nonatomic) NSString *targetName; // @synthesize targetName=_targetName;
@property(retain, nonatomic) NSArray *targetHeads; // @synthesize targetHeads=_targetHeads;
@property(retain, nonatomic) NSString *targetHead; // @synthesize targetHead=_targetHead;
@property(retain, nonatomic) NSNumber *targetId; // @synthesize targetId=_targetId;
@property(retain, nonatomic) NSString *sourceUserText; // @synthesize sourceUserText=_sourceUserText;
@property(retain, nonatomic) NSString *sourceSex; // @synthesize sourceSex=_sourceSex;
@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(retain, nonatomic) NSNumber *sourceId; // @synthesize sourceId=_sourceId;
@property(retain, nonatomic) NSArray *sourceHeads; // @synthesize sourceHeads=_sourceHeads;
@property(retain, nonatomic) NSString *sourceHead; // @synthesize sourceHead=_sourceHead;
- (void).cxx_destruct;
- (void)fetchThumbnailDataCompletion:(CDUnknownBlockType)arg1;
- (id)searchIndexKeywords;
- (id)searchIndexContent;
- (long long)searchIndexLife;
- (id)searchIndexTitle;
- (id)searchIndexId;
- (id)targetUser;
- (id)sourceUser;
@property(readonly, copy) NSString *description;
- (id)userSexNumberWithString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

