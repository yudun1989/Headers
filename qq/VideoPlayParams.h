//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURL;

@interface VideoPlayParams : NSObject
{
    long long _playID;
    NSURL *_playURL;
}

@property(retain, nonatomic) NSURL *playURL; // @synthesize playURL=_playURL;
@property(nonatomic) long long playID; // @synthesize playID=_playID;
- (void)dealloc;

@end

