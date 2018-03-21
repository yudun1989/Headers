//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, NSTimer;

@interface QQViewTracker : NSObject
{
    NSMutableArray *_trackViews;
    NSString *_aid;
    int _payResult;
    int _xo;
    NSMutableArray *_logArray;
    NSTimer *_saveTimer;
}

+ (id)getInstance;
@property(nonatomic) int payResult; // @synthesize payResult=_payResult;
@property(retain, nonatomic) NSString *aid; // @synthesize aid=_aid;
@property(retain, nonatomic) NSMutableArray *trackViews; // @synthesize trackViews=_trackViews;
- (id)formatLog;
- (long long)getVipType;
- (_Bool)checkUin:(id)arg1;
- (_Bool)checkPath:(id)arg1;
- (_Bool)uploadTracksLog;
- (_Bool)appendTrackLog:(id)arg1;
- (_Bool)saveCurrentTrack;
- (_Bool)reportViewTracks;
@property(readonly, retain, nonatomic) NSString *trimmedTrackStr;
@property(readonly, retain, nonatomic) NSString *trackStr;
- (_Bool)isTrackHasBeenReported;
- (void)removeLastWebViewTags;
- (void)removeAllViewTags;
- (_Bool)removeLastViewTag;
- (_Bool)addViewTag:(int)arg1 viewID:(unsigned long long)arg2 isWeb:(_Bool)arg3 shouldReport:(_Bool)arg4;
- (void)dealloc;
- (id)init;

@end
