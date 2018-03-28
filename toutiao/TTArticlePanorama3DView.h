//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class ExploreOrderedData, TTPanorama3DView;

@interface TTArticlePanorama3DView : SSThemedView
{
    TTPanorama3DView *_panoramaView;
    ExploreOrderedData *_orderedData;
}

@property(retain, nonatomic) ExploreOrderedData *orderedData; // @synthesize orderedData=_orderedData;
@property(retain, nonatomic) TTPanorama3DView *panoramaView; // @synthesize panoramaView=_panoramaView;
- (void).cxx_destruct;
- (void)resumeDisplay;
- (void)didEndDisplaying;
- (void)willDisplay;
- (void)dealloc;
- (id)animationFromView;
- (void)updateADPics:(id)arg1;
- (void)trackImageLoadTime:(double)arg1 model:(id)arg2;
- (void)refreshWithModel:(id)arg1;
- (void)updatePics:(id)arg1;
- (void)layoutPics;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initalizeImageView;
- (void)setFrame:(struct CGRect)arg1;

@end

