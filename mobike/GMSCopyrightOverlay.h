//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, GMSGradientView, UILabel;

@interface GMSCopyrightOverlay : UIView
{
    struct GMSCopyrightOverlayPadding *_padding;
    GMSGradientView *_gradient;
    CAGradientLayer *_gradientLayer;
    UILabel *_label;
    UILabel *_reportAProblem;
    id _reportAProblemTarget;
    SEL _reportAProblemSelector;
    _Bool _lightTextOnDarkBackground;
}

@property(nonatomic) _Bool lightTextOnDarkBackground; // @synthesize lightTextOnDarkBackground=_lightTextOnDarkBackground;
- (void).cxx_destruct;
- (id)gradientFromValue:(float)arg1 alignment:(long long)arg2;
- (id)localizedString:(unsigned int)arg1;
- (id)copyrightStringWithMapCopyrights:(id)arg1 imageryCopyrights:(id)arg2 copyrightYear:(int)arg3;
- (void)didTapReportAProblem;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)label;
- (void)setReportAProblemHandler:(id)arg1 selector:(SEL)arg2;
- (void)updateVisibleCopyrightWithString:(id)arg1;
- (void)updateVisibleCopyrights:(id)arg1 imageryCopyrights:(id)arg2 copyrightYear:(int)arg3;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 alignment:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

