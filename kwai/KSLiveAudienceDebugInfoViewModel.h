//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KSLiveAudienceDebugInfoViewModel : NSObject
{
    double _downloadSpeed;
    double _bps;
    double _lastRefreshTime;
    unsigned long long _lastDataSize;
    double _lastReadSize;
}

@property(nonatomic) double lastReadSize; // @synthesize lastReadSize=_lastReadSize;
@property(nonatomic) unsigned long long lastDataSize; // @synthesize lastDataSize=_lastDataSize;
@property(nonatomic) double lastRefreshTime; // @synthesize lastRefreshTime=_lastRefreshTime;
@property(nonatomic) double bps; // @synthesize bps=_bps;
@property(nonatomic) double downloadSpeed; // @synthesize downloadSpeed=_downloadSpeed;
- (void)updateWithPlayerVC:(id)arg1;

@end

