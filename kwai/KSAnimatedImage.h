//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface KSAnimatedImage : NSObject
{
    NSArray *_frames;
    double _duration;
}

+ (id)imageWithKey:(id)arg1;
+ (void)clearWithKey:(id)arg1;
+ (id)_backendKeyWithKey:(id)arg1 index:(unsigned long long)arg2;
+ (id)_backendKeyWithKey:(id)arg1;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSArray *frames; // @synthesize frames=_frames;
- (void).cxx_destruct;
- (id)createUIImage;
- (void)storeWithKey:(id)arg1;
- (id)initWithFrames:(id)arg1 duration:(double)arg2;

@end

