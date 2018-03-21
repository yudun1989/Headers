//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class UIColor, UILongPressGestureRecognizer, UIMenuController;

@interface TBCustomLabel : UILabel
{
    UILongPressGestureRecognizer *_longPressView;
    UIMenuController *_menuController;
    UIColor *_selectedColor;
    UIColor *_originColor;
}

@property(retain, nonatomic) UIColor *originColor; // @synthesize originColor=_originColor;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
- (void).cxx_destruct;
- (void)didHideMenu:(id)arg1;
- (void)showMenu:(id)arg1;
- (void)copyText:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)awakeFromNib;
- (void)config;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

