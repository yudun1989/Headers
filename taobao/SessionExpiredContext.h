//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SessionExpiredContext : NSObject <NSCopying>
{
    NSString *_nick;
    NSString *_msgCode;
    NSString *_reason;
    NSString *_apiName;
    NSString *_apiVersion;
    NSString *_timestamp;
}

@property(retain, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *apiVersion; // @synthesize apiVersion=_apiVersion;
@property(retain, nonatomic) NSString *apiName; // @synthesize apiName=_apiName;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSString *msgCode; // @synthesize msgCode=_msgCode;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)asDictionary;
- (id)initWithNick:(id)arg1 msgCode:(id)arg2 reason:(id)arg3 apiName:(id)arg4 apiVersion:(id)arg5;

@end

