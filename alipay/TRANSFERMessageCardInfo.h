//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TRANSFERMessageCardInfo : NSObject
{
    NSString *_clientMsgId;
    NSString *_bizRemind;
    NSString *_bizType;
    NSString *_bizMemo;
    NSString *_templateCode;
    NSString *_templateData;
    NSString *_link;
    NSString *_action;
}

@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *templateData; // @synthesize templateData=_templateData;
@property(retain, nonatomic) NSString *templateCode; // @synthesize templateCode=_templateCode;
@property(retain, nonatomic) NSString *bizMemo; // @synthesize bizMemo=_bizMemo;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *bizRemind; // @synthesize bizRemind=_bizRemind;
@property(retain, nonatomic) NSString *clientMsgId; // @synthesize clientMsgId=_clientMsgId;
- (void).cxx_destruct;

@end

