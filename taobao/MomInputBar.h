//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UITextField;
@protocol MomInputBarDelegate;

@interface MomInputBar : UIView
{
    id <MomInputBarDelegate> _delegate;
    UITextField *_textField;
}

@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak id <MomInputBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onConfirmClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

