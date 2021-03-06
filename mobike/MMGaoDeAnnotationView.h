//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAAnnotationView.h"

@class MMAnnotationView, MMGaodeMap;

@interface MMGaoDeAnnotationView : MAAnnotationView
{
    MMAnnotationView *_standardAnnotationView;
    MMGaodeMap *_gaodeMap;
}

@property(nonatomic) __weak MMGaodeMap *gaodeMap; // @synthesize gaodeMap=_gaodeMap;
@property(retain, nonatomic) MMAnnotationView *standardAnnotationView; // @synthesize standardAnnotationView=_standardAnnotationView;
- (void).cxx_destruct;
- (id)initWithStandardAnnotationView:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setCalloutOffset:(struct CGPoint)arg1;
- (void)setCustomCalloutView:(id)arg1;
- (void)setCanShowCallout:(_Bool)arg1;
- (void)setupData;
- (void)setupUI;
- (void)setup;
- (void)clear;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)mountTapGestureOnCalloutView;
- (void)handleInternalTap:(id)arg1;
- (_Bool)shouldShowCallout;

@end

