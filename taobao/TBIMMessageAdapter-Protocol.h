//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AMPMessageContext, NSDate, NSDictionary, NSString, TBAMPMessage;
@protocol TBIMMessageAdapter, TBIMUserAdapter;

@protocol TBIMMessageAdapter <NSObject>

@optional
@property(nonatomic) struct CGSize text2Size;
@property(nonatomic) struct CGSize text1Size;
- (TBAMPMessage *)getInerData;
- (NSDictionary *)toJsonDictionary;
- (AMPMessageContext *)getMessageContext;
- (_Bool)hasAitaInfo;
- (_Bool)canShowPush;
- (NSString *)remark;
- (long long)Compare:(id <TBIMMessageAdapter>)arg1;
- (_Bool)isEqual:(id <TBIMMessageAdapter>)arg1;
- (id <TBIMUserAdapter>)getSender;
- (NSString *)getSenderId;
- (_Bool)isTemp;
- (NSString *)code;
- (_Bool)isCenterDisplay;
- (_Bool)isSilent;
- (NSString *)getSenderName;
- (NSString *)summary;
- (NSDate *)getSendTime;
- (NSString *)getSessionId;
- (void)updateReadStatus:(unsigned long long)arg1;
- (unsigned long long)getReadStatus;
- (unsigned long long)getSendStatus;
- (unsigned long long)getDirection;
- (NSString *)getContent;
- (int)getMessageType;
- (long long)getBizSubId;
- (NSString *)getLocalMessageID;
- (void)updateMessageID:(NSString *)arg1;
- (NSString *)getMessageID;
@end

