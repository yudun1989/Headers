//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class UILabel;

@interface AliTallyStatusBar : UIWindow
{
    _Bool _isShowing;
    UILabel *_defaultLabel;
}

@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(retain, nonatomic) UILabel *defaultLabel; // @synthesize defaultLabel=_defaultLabel;
- (void).cxx_destruct;
- (void)hideStatusMessageWithoutAnimation;
- (void)hideStatusMessageWithAnimation;
- (void)showStatusMessage:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
