//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate, NSString;

@interface KSLiveGiftComboLeftTimeInfo : NSObject <NSCoding>
{
    long long _giftID;
    NSString *_liveStreamID;
    NSDate *_modifyDate;
    double _leftTime;
}

@property(nonatomic) double leftTime; // @synthesize leftTime=_leftTime;
@property(retain, nonatomic) NSDate *modifyDate; // @synthesize modifyDate=_modifyDate;
@property(copy, nonatomic) NSString *liveStreamID; // @synthesize liveStreamID=_liveStreamID;
@property(nonatomic) long long giftID; // @synthesize giftID=_giftID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

