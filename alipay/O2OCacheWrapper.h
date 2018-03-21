//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate;

@interface O2OCacheWrapper : NSObject <NSCoding>
{
    id _cacheValue;
    NSDate *_expireDate;
}

+ (id)wrapperWithValue:(id)arg1 withExpires:(id)arg2;
@property(retain, nonatomic) NSDate *expireDate; // @synthesize expireDate=_expireDate;
@property(retain, nonatomic) id cacheValue; // @synthesize cacheValue=_cacheValue;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;

@end

