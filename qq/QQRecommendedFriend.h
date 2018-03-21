//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCoding-Protocol.h>

@class NSData, NSString;

@interface QQRecommendedFriend : NSObject <NSCoding>
{
    _Bool _hasZoneImage;
    _Bool _visible;
    _Bool _unReaded;
    _Bool _isFromMoba;
    NSString *_uin;
    NSString *_name;
    NSString *_nick;
    NSString *_relation;
    NSData *_signatureBuffer;
    unsigned long long _signatureLength;
    NSString *_cookies;
    NSString *_mutualFriendsWording;
    unsigned long long _age;
    unsigned long long _gender;
    double _exposureTime;
    unsigned long long _pageID;
    unsigned long long _entranceID;
    unsigned long long _previousPageID;
    long long _addState;
    double _startExposureTime;
    double _endExposureTime;
    double _cardStartDisplayTime;
    double _timeStamp;
    NSString *_mainReason;
    NSString *_sourceReason;
    NSString *_alghritm;
    unsigned long long _source;
    unsigned long long _addFriendSource;
    unsigned long long _addFriendSubSource;
    NSString *_verifyMsg;
    NSString *_gameNick;
    NSString *_selfGameNick;
}

+ (void)flagStartExposureWithFriend:(id)arg1;
+ (void)reportExposureWithFriend:(id)arg1;
+ (id)getModelWithModel:(id)arg1;
+ (id)wordingForAddState:(unsigned long long)arg1;
+ (unsigned long long)entranceIDWithViewControllerClass:(Class)arg1 previousPageID:(unsigned long long)arg2;
+ (unsigned long long)pageIDWithViewControllerClass:(Class)arg1;
@property(copy, nonatomic) NSString *selfGameNick; // @synthesize selfGameNick=_selfGameNick;
@property(copy, nonatomic) NSString *gameNick; // @synthesize gameNick=_gameNick;
@property(nonatomic) _Bool isFromMoba; // @synthesize isFromMoba=_isFromMoba;
@property(copy, nonatomic) NSString *verifyMsg; // @synthesize verifyMsg=_verifyMsg;
@property(nonatomic) unsigned long long addFriendSubSource; // @synthesize addFriendSubSource=_addFriendSubSource;
@property(nonatomic) unsigned long long addFriendSource; // @synthesize addFriendSource=_addFriendSource;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *alghritm; // @synthesize alghritm=_alghritm;
@property(copy, nonatomic) NSString *sourceReason; // @synthesize sourceReason=_sourceReason;
@property(copy, nonatomic) NSString *mainReason; // @synthesize mainReason=_mainReason;
@property(nonatomic) _Bool unReaded; // @synthesize unReaded=_unReaded;
@property(nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) double cardStartDisplayTime; // @synthesize cardStartDisplayTime=_cardStartDisplayTime;
@property(nonatomic) double endExposureTime; // @synthesize endExposureTime=_endExposureTime;
@property(nonatomic) double startExposureTime; // @synthesize startExposureTime=_startExposureTime;
@property(nonatomic) long long addState; // @synthesize addState=_addState;
@property(nonatomic) unsigned long long previousPageID; // @synthesize previousPageID=_previousPageID;
@property(nonatomic) unsigned long long entranceID; // @synthesize entranceID=_entranceID;
@property(nonatomic) unsigned long long pageID; // @synthesize pageID=_pageID;
@property(nonatomic) double exposureTime; // @synthesize exposureTime=_exposureTime;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) unsigned long long gender; // @synthesize gender=_gender;
@property(nonatomic) _Bool hasZoneImage; // @synthesize hasZoneImage=_hasZoneImage;
@property(nonatomic) unsigned long long age; // @synthesize age=_age;
@property(copy, nonatomic) NSString *mutualFriendsWording; // @synthesize mutualFriendsWording=_mutualFriendsWording;
@property(copy, nonatomic) NSString *cookies; // @synthesize cookies=_cookies;
@property(nonatomic) unsigned long long signatureLength; // @synthesize signatureLength=_signatureLength;
@property(copy, nonatomic) NSData *signatureBuffer; // @synthesize signatureBuffer=_signatureBuffer;
@property(copy, nonatomic) NSString *relation; // @synthesize relation=_relation;
@property(copy, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *uin; // @synthesize uin=_uin;
- (void).cxx_destruct;
- (id)getFullGameNick;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

