//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton;

@interface KSPhoneCodeFooterView : UIView
{
    UIButton *_doneButton;
    NSString *_submitBtnText;
}

@property(retain, nonatomic) NSString *submitBtnText; // @synthesize submitBtnText=_submitBtnText;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
- (void).cxx_destruct;
- (void)setDoneButtonEnabled:(_Bool)arg1;
- (void)commonInit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithSubmitBtnText:(id)arg1;

@end

