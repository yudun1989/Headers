//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface AXXFaudiorecQueryTvInfoModel : NSObject
{
    int _type;
    int _status;
    NSString *_channel;
    NSString *_channelName;
    NSString *_url;
}

@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *channelName; // @synthesize channelName=_channelName;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
- (void).cxx_destruct;

@end

