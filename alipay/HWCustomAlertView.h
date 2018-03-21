//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol HWCustomAlertViewDelegate;

@interface HWCustomAlertView : UIView
{
    UIView *_backGroundView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UILabel *_bodyLabel;
    UIButton *_canleButton;
    UIButton *_otherButton;
    UILabel *_horLabel;
    UILabel *_verLabel;
    id <HWCustomAlertViewDelegate> _delegate;
}

@property(retain, nonatomic) id <HWCustomAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *verLabel; // @synthesize verLabel=_verLabel;
@property(retain, nonatomic) UILabel *horLabel; // @synthesize horLabel=_horLabel;
@property(retain, nonatomic) UIButton *otherButton; // @synthesize otherButton=_otherButton;
@property(retain, nonatomic) UIButton *canleButton; // @synthesize canleButton=_canleButton;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *backGroundView; // @synthesize backGroundView=_backGroundView;
- (void).cxx_destruct;
- (void)toDoSomething:(id)arg1;
- (void)clickToUseDelegate:(id)arg1;
- (void)shakeToShow:(id)arg1;
- (double)getHeightWithTitle:(id)arg1 andFont:(long long)arg2;
- (void)createUIWithTitle:(id)arg1 andDetail:(id)arg2 andBody:(id)arg3 andCancelTitle:(id)arg4 andOtherTitle:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1 WithTitle:(id)arg2 andDetail:(id)arg3 andBody:(id)arg4 andCancelTitle:(id)arg5 andOtherTitle:(id)arg6;

@end

