//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface APVAAsrOut : NSObject <NSCopying>
{
    long long _finish;
    NSString *_result;
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *result; // @synthesize result=_result;
@property(nonatomic) long long finish; // @synthesize finish=_finish;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1;

@end

