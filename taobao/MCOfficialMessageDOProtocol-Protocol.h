//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSString;
@protocol MCOfficialMessageDOProtocol;

@protocol MCOfficialMessageDOProtocol <NSObject>
@property(nonatomic) unsigned long long sendStatus;
@property(nonatomic) _Bool isRetry;
- (void)setMsgAttrOriMsgTypeId:(NSString *)arg1;
- (NSString *)msgAttrOriMsgTypeId;
- (void)setMsgAttrOriTemplateId:(NSString *)arg1;
- (NSString *)msgAttrOriTemplateId;
- (void)setOnTop:(_Bool)arg1;
- (_Bool)onTop;
- (void)setMessageIsRead:(_Bool)arg1;
- (_Bool)messageIsRead;
- (int)messageFormat;
- (NSString *)sourceId;
- (void)setTemplateid:(NSString *)arg1;
- (NSString *)templateid;
- (void)setMessageCode:(NSString *)arg1;
- (NSString *)messageCode;
- (void)setSenderUserNick:(NSString *)arg1;
- (NSString *)senderUserNick;
- (unsigned long long)direction;
- (void)setOfficialID:(NSString *)arg1;
- (NSString *)officialID;
- (void)setTimeDate:(NSDate *)arg1;
- (NSDate *)timeDate;
- (void)setSummary:(NSString *)arg1;
- (NSString *)summary;
- (_Bool)ignoreSortRule;
- (long long)compare:(id <MCOfficialMessageDOProtocol>)arg1;
- (NSString *)utMessageID;
- (NSString *)messageID;
@end

