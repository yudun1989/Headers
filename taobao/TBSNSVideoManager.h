//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DWGIFInstance, DWInstance, NSMutableDictionary, NSString, UIView;
@protocol TNodeComponentProtocol;

@interface TBSNSVideoManager : NSObject
{
    DWInstance *_instance;
    DWGIFInstance *_gifInstance;
    NSMutableDictionary *_videoCache;
    NSString *_videoUrl;
    struct UIView *_currentPlayComponent;
}

+ (id)instance;
@property(nonatomic) __weak UIView<TNodeComponentProtocol> *currentPlayComponent; // @synthesize currentPlayComponent=_currentPlayComponent;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) NSMutableDictionary *videoCache; // @synthesize videoCache=_videoCache;
@property(nonatomic) __weak DWGIFInstance *gifInstance; // @synthesize gifInstance=_gifInstance;
@property(nonatomic) __weak DWInstance *instance; // @synthesize instance=_instance;
- (void).cxx_destruct;
- (void)removeSeekCahceForKey:(id)arg1;
- (double)cacheValueForKey:(id)arg1;
- (void)cacheValue:(double)arg1 forKey:(id)arg2;
- (struct UIView *)currentComponent;
- (void)playVideo;
- (void)removeCurrentComponent;

@end

