//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface PickBottleResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *bottleInfo; // @dynamic bottleInfo;
@property(nonatomic) int bottleType; // @dynamic bottleType;
@property(nonatomic) int distance; // @dynamic distance;
@property(nonatomic) int msgType; // @dynamic msgType;
@property(retain, nonatomic) NSString *nickName; // @dynamic nickName;
@property(nonatomic) int pickCount; // @dynamic pickCount;
@property(nonatomic) int throwCount; // @dynamic throwCount;
@property(retain, nonatomic) NSString *userInfo; // @dynamic userInfo;
@property(nonatomic) unsigned int userStatus; // @dynamic userStatus;

@end

