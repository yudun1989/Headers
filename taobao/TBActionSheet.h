//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIButton, UILabel;

@interface TBActionSheet : UIView
{
    UIView *_backView;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _destructiveBlock;
    CDUnknownBlockType _otherBlock;
    CDUnknownBlockType _tapMaskBlock;
    UILabel *_titleLabel;
    UIButton *_cancelButton;
    UIButton *_destructiveButton;
    NSArray *_otherButtons;
    double _positionY;
}

@property(nonatomic) double positionY; // @synthesize positionY=_positionY;
@property(retain, nonatomic) NSArray *otherButtons; // @synthesize otherButtons=_otherButtons;
@property(retain, nonatomic) UIButton *destructiveButton; // @synthesize destructiveButton=_destructiveButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType tapMaskBlock; // @synthesize tapMaskBlock=_tapMaskBlock;
@property(copy, nonatomic) CDUnknownBlockType otherBlock; // @synthesize otherBlock=_otherBlock;
@property(copy, nonatomic) CDUnknownBlockType destructiveBlock; // @synthesize destructiveBlock=_destructiveBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
- (void).cxx_destruct;
- (void)tappedCancel:(id)arg1;
- (void)buttonPressed:(id)arg1;
- (void)baseInitWithTitle:(id)arg1 cancelButtonTitle:(id)arg2 destructiveButtonTitle:(id)arg3 otherButtonTitles:(id)arg4;
- (id)creatOtherButtonWithTitle:(id)arg1;
- (void)showInView:(id)arg1;
- (id)initWithTitle:(id)arg1 cancelButtonTitle:(id)arg2 destructiveButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 cancelBlock:(CDUnknownBlockType)arg5 destructiveBlock:(CDUnknownBlockType)arg6 otherBlock:(CDUnknownBlockType)arg7 tapMaskBlock:(CDUnknownBlockType)arg8;

@end

