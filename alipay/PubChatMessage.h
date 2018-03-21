//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PPMessageSyncModel.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface PubChatMessage : PPMessageSyncModel <NSCopying>
{
    int _mId;
    NSString *_userId;
    NSString *_appId;
    NSString *_mk;
    NSString *_mct;
    NSString *_st;
    NSString *_isRead;
    NSString *_msgStatus;
    NSString *_msgDirection;
    long long _msgSendType;
    long long _msgPosed;
    NSString *_publicInfo;
}

@property(retain, nonatomic) NSString *publicInfo; // @synthesize publicInfo=_publicInfo;
@property(nonatomic) long long msgPosed; // @synthesize msgPosed=_msgPosed;
@property(nonatomic) long long msgSendType; // @synthesize msgSendType=_msgSendType;
@property(retain, nonatomic) NSString *msgDirection; // @synthesize msgDirection=_msgDirection;
@property(retain, nonatomic) NSString *msgStatus; // @synthesize msgStatus=_msgStatus;
@property(retain, nonatomic) NSString *isRead; // @synthesize isRead=_isRead;
@property(retain, nonatomic) NSString *st; // @synthesize st=_st;
@property(retain, nonatomic) NSString *mct; // @synthesize mct=_mct;
@property(retain, nonatomic) NSString *mk; // @synthesize mk=_mk;
@property(nonatomic) int mId; // @synthesize mId=_mId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBizDic:(id)arg1;

@end

