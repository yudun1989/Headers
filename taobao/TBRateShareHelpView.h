//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UITextView;
@protocol TBRateShareHelpViewDelegate;

@interface TBRateShareHelpView : UIView
{
    UILabel *_titleLable;
    UITextView *_textView;
    id <TBRateShareHelpViewDelegate> _delegate;
}

@property(nonatomic) id <TBRateShareHelpViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setShareHelpText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

