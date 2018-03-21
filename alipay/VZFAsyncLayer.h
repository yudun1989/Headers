//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import "VZFAsyncLayerDrawingDelegate-Protocol.h"

@class NSNumber, NSString;

@interface VZFAsyncLayer : CALayer <VZFAsyncLayerDrawingDelegate>
{
    int _displaySentinel;
    _Bool _needsAsyncDisplayOnly;
    NSNumber *_nextSyncDisplay;
    struct {
        _Bool valid;
        NSString *contentsGravity;
        _Bool masksToBounds;
    } _stashState;
    unsigned long long _displayMode;
    unsigned long long _rasterizeCachePolicy;
}

+ (CDUnknownBlockType)asyncDisplayBlockWithBounds:(struct CGRect)arg1 contentsScale:(double)arg2 opaque:(_Bool)arg3 backgroundColor:(struct CGColor *)arg4 displaySentinel:(int *)arg5 expectedDisplaySentinelValue:(int)arg6 drawingDelegate:(id)arg7 drawParameters:(id)arg8;
+ (id)defaultValueForKey:(id)arg1;
+ (id)displayQueue;
@property(nonatomic) unsigned long long rasterizeCachePolicy; // @synthesize rasterizeCachePolicy=_rasterizeCachePolicy;
@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext *)arg1 parameters:(id)arg2;
- (void)didDisplayAsynchronously:(id)arg1 withDrawParameters:(id)arg2;
- (id)willDisplayAsynchronouslyWithDrawParameters:(id)arg1;
- (void)drawAsyncLayerInContext:(struct CGContext *)arg1 parameters:(id)arg2;
- (void)cancelAsyncDisplay;
- (void)setNeedsAsyncDisplay;
- (id)drawParameters;
- (void)tryToRecoverState;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)display;
- (void)setContentsGravity:(id)arg1;
- (void)setMasksToBounds:(_Bool)arg1;
- (void)setBackgroundColor:(struct CGColor *)arg1;
- (void)setBorderColor:(struct CGColor *)arg1;
- (void)setBorderWidth:(double)arg1;
- (_Bool)asyncDisplay;
- (void)resetNextSyncDisplay;
- (void)setNeedsDisplay;

@end

