//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class AMapNaviPoint, NSString;

@interface AMapNaviGuide : NSObject <NSCopying, NSCoding>
{
    NSString *_name;
    long long _length;
    long long _time;
    long long _iconType;
    AMapNaviPoint *_coordinate;
}

@property(retain, nonatomic) AMapNaviPoint *coordinate; // @synthesize coordinate=_coordinate;
@property(nonatomic) long long iconType; // @synthesize iconType=_iconType;
@property(nonatomic) long long time; // @synthesize time=_time;
@property(nonatomic) long long length; // @synthesize length=_length;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end
