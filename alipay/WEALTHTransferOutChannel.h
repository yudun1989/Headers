//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WEALTHToString.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface WEALTHTransferOutChannel : WEALTHToString <NSCopying>
{
    _Bool _channelEnable;
    NSString *_channelName;
    NSString *_channelType;
    NSString *_channelTip;
}

@property(retain, nonatomic) NSString *channelTip; // @synthesize channelTip=_channelTip;
@property(nonatomic) _Bool channelEnable; // @synthesize channelEnable=_channelEnable;
@property(retain, nonatomic) NSString *channelType; // @synthesize channelType=_channelType;
@property(retain, nonatomic) NSString *channelName; // @synthesize channelName=_channelName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

