//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface KSUUserInfo : GPBMessage
{
}

+ (id)descriptor;
@property(nonatomic) short adminType;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *headUrlsArray; // @dynamic headUrlsArray;
@property(readonly, nonatomic) unsigned long long headUrlsArray_Count; // @dynamic headUrlsArray_Count;
@property(copy, nonatomic) NSString *userGender; // @dynamic userGender;
@property(nonatomic) unsigned long long userId; // @dynamic userId;
@property(copy, nonatomic) NSString *userName; // @dynamic userName;
@property(copy, nonatomic) NSString *userText; // @dynamic userText;
@property(nonatomic) _Bool verified; // @dynamic verified;

@end

