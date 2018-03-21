//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class APButton, APWealthAgreementBox, UILabel;

@interface APWealthFooterView : UIView
{
    APButton *_button;
    APWealthAgreementBox *_agreement;
    UILabel *_textlabel;
    double _startY;
}

@property(nonatomic) double startY; // @synthesize startY=_startY;
@property(retain, nonatomic) UILabel *textlabel; // @synthesize textlabel=_textlabel;
@property(retain, nonatomic) APWealthAgreementBox *agreement; // @synthesize agreement=_agreement;
@property(retain, nonatomic) APButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)addLabelText:(id)arg1;
- (void)addAgreement:(id)arg1 linkText:(id)arg2 delegate:(id)arg3;
- (void)addAPButton:(id)arg1 delegate:(id)arg2 action:(SEL)arg3;
- (void)buildLabel;
- (id)initWithLabelText:(id)arg1;
- (id)init;

@end

