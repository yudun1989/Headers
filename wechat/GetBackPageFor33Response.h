//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BackPageInfo, BaseResponse, NSString, ShowWordsInfo;

@interface GetBackPageFor33Response : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int actionCode; // @dynamic actionCode;
@property(retain, nonatomic) BackPageInfo *backPageInfo; // @dynamic backPageInfo;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int hasMobile; // @dynamic hasMobile;
@property(nonatomic) unsigned int relativeExpiredSeconds; // @dynamic relativeExpiredSeconds;
@property(retain, nonatomic) NSString *showUrl; // @dynamic showUrl;
@property(retain, nonatomic) ShowWordsInfo *showWords; // @dynamic showWords;

@end

