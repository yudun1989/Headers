//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseResponse, C2CMsgNode, HoneyUserDetail, NSString;

@interface QryHoneyUserDetailResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *attentionMessage; // @dynamic attentionMessage;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) C2CMsgNode *c2Cmsg; // @dynamic c2Cmsg;
@property(retain, nonatomic) HoneyUserDetail *detail; // @dynamic detail;
@property(retain, nonatomic) NSString *explain; // @dynamic explain;
@property(retain, nonatomic) NSString *helpUrl; // @dynamic helpUrl;
@property(retain, nonatomic) NSString *helpWord; // @dynamic helpWord;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;

@end

