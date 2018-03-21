//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSNumber, NSString, TribeList, YWPerson;

@interface YWTribe : NSObject
{
    _Bool _enableAtAll;
    NSString *_tribeId;
    NSString *_tribeName;
    NSString *_notice;
    long long _tribeType;
    unsigned long long _checkMode;
    YWPerson *_tribeMaster;
    long long _membersCount;
    NSString *_extendProperties;
    NSNumber *_deleteFlag;
    NSString *_avatar;
    NSString *_tribeSign;
    long long _messageReceiveFlag;
    TribeList *_requestResultTribeList;
    NSDictionary *_extendPropertiesDictionary;
}

+ (id)makeTribeWithTribeList:(id)arg1;
+ (id)makeTribeWithWWTribeList:(id)arg1;
@property(retain) NSDictionary *extendPropertiesDictionary; // @synthesize extendPropertiesDictionary=_extendPropertiesDictionary;
@property(retain, nonatomic) TribeList *requestResultTribeList; // @synthesize requestResultTribeList=_requestResultTribeList;
@property(nonatomic) long long messageReceiveFlag; // @synthesize messageReceiveFlag=_messageReceiveFlag;
@property(copy, nonatomic) NSString *tribeSign; // @synthesize tribeSign=_tribeSign;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSNumber *deleteFlag; // @synthesize deleteFlag=_deleteFlag;
@property(copy, nonatomic) NSString *extendProperties; // @synthesize extendProperties=_extendProperties;
@property(nonatomic) long long membersCount; // @synthesize membersCount=_membersCount;
@property(retain, nonatomic) YWPerson *tribeMaster; // @synthesize tribeMaster=_tribeMaster;
@property(nonatomic) _Bool enableAtAll; // @synthesize enableAtAll=_enableAtAll;
@property(nonatomic) unsigned long long checkMode; // @synthesize checkMode=_checkMode;
@property(nonatomic) long long tribeType; // @synthesize tribeType=_tribeType;
@property(copy, nonatomic) NSString *notice; // @synthesize notice=_notice;
@property(copy, nonatomic) NSString *tribeName; // @synthesize tribeName=_tribeName;
@property(copy, nonatomic) NSString *tribeId; // @synthesize tribeId=_tribeId;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToTribe:(id)arg1;
- (id)description;
- (id)initWithTribeID:(id)arg1;
@property(readonly, nonatomic) _Bool enableRoamingMessagesBeforeJoined;

@end

