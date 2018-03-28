//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTUGCAttributedLabel.h"

#import "TTUGCAsyncLayerDelegate-Protocol.h"

@class NSString;

@interface TTUGCAsyncAttributedLabel : TTUGCAttributedLabel <TTUGCAsyncLayerDelegate>
{
    _Bool _disableHitTest;
}

+ (Class)layerClass;
@property(nonatomic) _Bool disableHitTest; // @synthesize disableHitTest=_disableHitTest;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setNeedsDisplay;
- (id)asyncLayerDisplayTask;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

