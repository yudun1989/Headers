//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSString, UIColor, UIFont, UILabel;

@interface O2OLCTextView : UITextView
{
    NSString *_placeholder;
    UIFont *_placeholderFont;
    UIColor *_placeholderColor;
    UILabel *_placeholderLabel;
}

@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(retain, nonatomic) UIFont *placeholderFont; // @synthesize placeholderFont=_placeholderFont;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
- (void).cxx_destruct;
- (void)textDidChanged:(id)arg1;
- (void)layoutSubviews;
- (void)updatePlaceholderLabel;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

