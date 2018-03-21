//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol TBOrderPopViewDelegate;

@interface TBOrderPopView : UIView
{
    id <TBOrderPopViewDelegate> _delegate;
    UIButton *_backgroundButton;
}

@property(retain, nonatomic) UIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(nonatomic) __weak id <TBOrderPopViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dismissPopView;
- (void)initButton;
- (id)initWithFrame:(struct CGRect)arg1;

@end

