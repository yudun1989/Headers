//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBaseViewController.h"

@class UIView;

@interface DTViewController : DTBaseViewController
{
}

- (void)loadView;
- (void)bee_handleError:(id)arg1 retrySelector:(SEL)arg2;
- (void)bee_handleError:(id)arg1 retry:(CDUnknownBlockType)arg2;
- (void)bee_handleFollowAction:(id)arg1 context:(id)arg2;
- (id)bee_busnessName;
- (_Bool)bee_canPerformFollowAction:(id)arg1 context:(id)arg2 conti:(CDUnknownBlockType)arg3;
- (_Bool)bee_canPerformFollowAction:(id)arg1 context:(id)arg2;
- (_Bool)bee_canPerformFollowAction:(id)arg1;
- (void)bee_handleError:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)bee_handleError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)bee_handleError:(id)arg1 context:(id)arg2;
- (void)bee_handleError:(id)arg1;
- (void)bee_handleButtonClick:(id)arg1;
- (void)bee_loadException:(int)arg1 info:(id)arg2 retry:(_Bool)arg3 btnText:(id)arg4 selector:(SEL)arg5 buttonFollowActions:(id)arg6;
- (void)bee_loadException:(int)arg1 info:(id)arg2 retry:(_Bool)arg3 selector:(SEL)arg4;
- (_Bool)isIlustrationImage;
- (id)bee_contentView;
@property(nonatomic) SEL bee_retrySelector;
@property(retain, nonatomic) UIView *bee_exceptionView;
@property(nonatomic) _Bool bee_exceptionIlustration;

@end

