//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate, NSNumber, NSString;

@interface TTADRefreshChannelShowTimeModel : NSObject <NSCoding>
{
    NSString *_channelId;
    NSNumber *_showTimes;
    NSDate *_showDate;
}

@property(copy, nonatomic) NSDate *showDate; // @synthesize showDate=_showDate;
@property(retain, nonatomic) NSNumber *showTimes; // @synthesize showTimes=_showTimes;
@property(copy, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithChannelId:(id)arg1;
- (id)init;

@end

