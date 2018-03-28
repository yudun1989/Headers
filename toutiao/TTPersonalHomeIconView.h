//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class NSString, SSThemedImageView, TTAvatarDecoratorView, TTVerifyIconImageView;

@interface TTPersonalHomeIconView : SSThemedView
{
    TTVerifyIconImageView *_avatarVerifyView;
    SSThemedImageView *_avatarImageView;
    SSThemedView *_coverView;
    NSString *_placeHolder;
    TTAvatarDecoratorView *_decoratorView;
}

@property(retain, nonatomic) TTAvatarDecoratorView *decoratorView; // @synthesize decoratorView=_decoratorView;
@property(copy, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(retain, nonatomic) SSThemedView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) SSThemedImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) TTVerifyIconImageView *avatarVerifyView; // @synthesize avatarVerifyView=_avatarVerifyView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)themedChange;
- (void)hideVerifyView;
- (void)showPersonalVerifyViewWithVerifyInfo:(id)arg1 size:(struct CGSize)arg2;
- (void)setDecoratorWithURL:(id)arg1 userID:(id)arg2;
- (void)setImageWithURL:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

