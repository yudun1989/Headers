//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSArray;

@interface TBARDetailLoadingView : UIView
{
    float _progress;
    NSArray *_tipArray;
    UIView *_progressContainerView;
    CAGradientLayer *_progressLayer;
}

@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(retain, nonatomic) CAGradientLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) UIView *progressContainerView; // @synthesize progressContainerView=_progressContainerView;
@property(copy, nonatomic) NSArray *tipArray; // @synthesize tipArray=_tipArray;
- (void).cxx_destruct;
- (void)setupTipsView;
- (void)setupLoadingLabel;
- (void)setupProgressView;
- (id)initWithFrame:(struct CGRect)arg1 tips:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

