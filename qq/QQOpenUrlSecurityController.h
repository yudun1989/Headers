//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface QQOpenUrlSecurityController : NSObject
{
    NSDictionary *_requestTimeRecord;
    NSArray *blacklist;
    NSArray *whitelist;
}

+ (id)Instance;
@property(retain, nonatomic, setter=setWhilelist:) NSArray *whitelist; // @synthesize whitelist;
@property(retain, nonatomic, setter=setBlacklist:) NSArray *blacklist; // @synthesize blacklist;
- (_Bool)isRequestAllowed:(id)arg1;
- (void)dealloc;
- (id)init;

@end

