//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SSThemedButton;

@protocol ErrorToastProtocal <NSObject>
@property(retain, nonatomic) SSThemedButton *rightActionButton;
- (_Bool)needResetScrollView;
- (void)hideIfNeeds;
- (void)hideImmediately;
- (void)showMessage:(NSString *)arg1 actionButtonTitle:(NSString *)arg2 delayHide:(_Bool)arg3 duration:(float)arg4 bgButtonClickAction:(void (^)(UIButton *))arg5 actionButtonClickBlock:(void (^)(UIButton *))arg6 didHideBlock:(void (^)(id))arg7;
@end

