//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/CFT_F374133.h>

@protocol TenpaySecTextFieldDelegate;

@interface CFT_TenpaySecTextField : CFT_F374133
{
    _Bool _isSystem;
    id <TenpaySecTextFieldDelegate> _numKeyBordDelegate;
}

@property(nonatomic) _Bool isSystem; // @synthesize isSystem=_isSystem;
@property(nonatomic) id <TenpaySecTextFieldDelegate> numKeyBordDelegate; // @synthesize numKeyBordDelegate=_numKeyBordDelegate;
- (void)viewtoucheEnd:(id)arg1;
- (id)GetMorTextFieldRsaEncode:(id)arg1;
- (id)GetTextFieldRsaEncode;
- (void)SelectRsaKey:(int)arg1;
- (void)SetSalt:(id)arg1;
- (void)SetScene:(id)arg1;
- (void)setKeyboardBgImage:(id)arg1 delImage:(id)arg2;
- (void)setSecureTipsView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 isSysKeyBord:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

