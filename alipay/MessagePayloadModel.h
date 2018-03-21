//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSData, NSString;

@interface MessagePayloadModel : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasFromUId;
    _Bool _hasFromLoginId;
    _Bool _hasToUId;
    _Bool _hasToLoginId;
    _Bool _hasToType;
    _Bool _hasMsgId;
    _Bool _hasClientMsgId;
    _Bool _hasTemplateCode;
    _Bool _hasTemplateData;
    _Bool _hasHintMemo;
    _Bool _hasBizMemo;
    _Bool _hasBizType;
    _Bool _hasEgg;
    _Bool _hasLink;
    _Bool _hasCreateTime;
    _Bool _hasRecent;
    _Bool _hasRead;
    _Bool _hasAction;
    _Bool _hasBizRemind;
    _Bool _hasResources;
    _Bool _hasLastMsg;
    _Bool _hasNextMsg;
    _Bool _hasMsgIndex;
    _Bool _hasSubBizType;
    _Bool _hasSubPayload;
    _Bool _hasSubPayloadJson;
    _Bool _hasMinVersion;
    _Bool _hasContext;
    _Bool _hasIgnoreApp;
    int _action;
    NSString *_fromUId;
    NSString *_fromLoginId;
    NSString *_toUId;
    NSString *_toLoginId;
    NSString *_toType;
    long long _msgId;
    NSString *_clientMsgId;
    NSString *_templateCode;
    NSString *_templateData;
    NSString *_hintMemo;
    NSString *_bizMemo;
    NSString *_bizType;
    NSString *_egg;
    NSString *_link;
    long long _createTime;
    NSString *_recent;
    NSString *_read;
    NSString *_bizRemind;
    NSData *_resources;
    MessagePayloadModel *_lastMsg;
    MessagePayloadModel *_nextMsg;
    NSString *_msgIndex;
    NSString *_subBizType;
    NSData *_subPayload;
    NSString *_subPayloadJson;
    NSString *_minVersion;
    NSString *_context;
    NSString *_ignoreApp;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *ignoreApp; // @synthesize ignoreApp=_ignoreApp;
@property(retain, nonatomic) NSString *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *minVersion; // @synthesize minVersion=_minVersion;
@property(retain, nonatomic) NSString *subPayloadJson; // @synthesize subPayloadJson=_subPayloadJson;
@property(retain, nonatomic) NSData *subPayload; // @synthesize subPayload=_subPayload;
@property(retain, nonatomic) NSString *subBizType; // @synthesize subBizType=_subBizType;
@property(retain, nonatomic) NSString *msgIndex; // @synthesize msgIndex=_msgIndex;
@property(retain, nonatomic) MessagePayloadModel *nextMsg; // @synthesize nextMsg=_nextMsg;
@property(retain, nonatomic) MessagePayloadModel *lastMsg; // @synthesize lastMsg=_lastMsg;
@property(retain, nonatomic) NSData *resources; // @synthesize resources=_resources;
@property(retain, nonatomic) NSString *bizRemind; // @synthesize bizRemind=_bizRemind;
@property(nonatomic) int action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *read; // @synthesize read=_read;
@property(retain, nonatomic) NSString *recent; // @synthesize recent=_recent;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *egg; // @synthesize egg=_egg;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *bizMemo; // @synthesize bizMemo=_bizMemo;
@property(retain, nonatomic) NSString *hintMemo; // @synthesize hintMemo=_hintMemo;
@property(retain, nonatomic) NSString *templateData; // @synthesize templateData=_templateData;
@property(retain, nonatomic) NSString *templateCode; // @synthesize templateCode=_templateCode;
@property(retain, nonatomic) NSString *clientMsgId; // @synthesize clientMsgId=_clientMsgId;
@property(nonatomic) long long msgId; // @synthesize msgId=_msgId;
@property(retain, nonatomic) NSString *toType; // @synthesize toType=_toType;
@property(retain, nonatomic) NSString *toLoginId; // @synthesize toLoginId=_toLoginId;
@property(retain, nonatomic) NSString *toUId; // @synthesize toUId=_toUId;
@property(retain, nonatomic) NSString *fromLoginId; // @synthesize fromLoginId=_fromLoginId;
@property(retain, nonatomic) NSString *fromUId; // @synthesize fromUId=_fromUId;
@property(readonly) _Bool hasIgnoreApp; // @synthesize hasIgnoreApp=_hasIgnoreApp;
@property(readonly) _Bool hasContext; // @synthesize hasContext=_hasContext;
@property(readonly) _Bool hasMinVersion; // @synthesize hasMinVersion=_hasMinVersion;
@property(readonly) _Bool hasSubPayloadJson; // @synthesize hasSubPayloadJson=_hasSubPayloadJson;
@property(readonly) _Bool hasSubPayload; // @synthesize hasSubPayload=_hasSubPayload;
@property(readonly) _Bool hasSubBizType; // @synthesize hasSubBizType=_hasSubBizType;
@property(readonly) _Bool hasMsgIndex; // @synthesize hasMsgIndex=_hasMsgIndex;
@property(readonly) _Bool hasNextMsg; // @synthesize hasNextMsg=_hasNextMsg;
@property(readonly) _Bool hasLastMsg; // @synthesize hasLastMsg=_hasLastMsg;
@property(readonly) _Bool hasResources; // @synthesize hasResources=_hasResources;
@property(readonly) _Bool hasBizRemind; // @synthesize hasBizRemind=_hasBizRemind;
@property(readonly) _Bool hasAction; // @synthesize hasAction=_hasAction;
@property(readonly) _Bool hasRead; // @synthesize hasRead=_hasRead;
@property(readonly) _Bool hasRecent; // @synthesize hasRecent=_hasRecent;
@property(readonly) _Bool hasCreateTime; // @synthesize hasCreateTime=_hasCreateTime;
@property(readonly) _Bool hasLink; // @synthesize hasLink=_hasLink;
@property(readonly) _Bool hasEgg; // @synthesize hasEgg=_hasEgg;
@property(readonly) _Bool hasBizType; // @synthesize hasBizType=_hasBizType;
@property(readonly) _Bool hasBizMemo; // @synthesize hasBizMemo=_hasBizMemo;
@property(readonly) _Bool hasHintMemo; // @synthesize hasHintMemo=_hasHintMemo;
@property(readonly) _Bool hasTemplateData; // @synthesize hasTemplateData=_hasTemplateData;
@property(readonly) _Bool hasTemplateCode; // @synthesize hasTemplateCode=_hasTemplateCode;
@property(readonly) _Bool hasClientMsgId; // @synthesize hasClientMsgId=_hasClientMsgId;
@property(readonly) _Bool hasMsgId; // @synthesize hasMsgId=_hasMsgId;
@property(readonly) _Bool hasToType; // @synthesize hasToType=_hasToType;
@property(readonly) _Bool hasToLoginId; // @synthesize hasToLoginId=_hasToLoginId;
@property(readonly) _Bool hasToUId; // @synthesize hasToUId=_hasToUId;
@property(readonly) _Bool hasFromLoginId; // @synthesize hasFromLoginId=_hasFromLoginId;
@property(readonly) _Bool hasFromUId; // @synthesize hasFromUId=_hasFromUId;
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

