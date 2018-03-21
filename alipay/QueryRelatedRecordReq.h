//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString;

@interface QueryRelatedRecordReq : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasBizType;
    _Bool _hasGroupBizNo;
    NSString *_bizType;
    NSString *_groupBizNo;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *groupBizNo; // @synthesize groupBizNo=_groupBizNo;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(readonly) _Bool hasGroupBizNo; // @synthesize hasGroupBizNo=_hasGroupBizNo;
@property(readonly) _Bool hasBizType; // @synthesize hasBizType=_hasBizType;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

