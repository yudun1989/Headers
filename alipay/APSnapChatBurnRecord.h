//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface APSnapChatBurnRecord : NSObject
{
    NSString *_clientMsgId;
    NSString *_userId;
    NSString *_userType;
    NSString *_templateCode;
}

@property(retain, nonatomic) NSString *templateCode; // @synthesize templateCode=_templateCode;
@property(retain, nonatomic) NSString *userType; // @synthesize userType=_userType;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *clientMsgId; // @synthesize clientMsgId=_clientMsgId;
- (void).cxx_destruct;

@end

