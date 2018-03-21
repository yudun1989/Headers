//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface BEECellView : UIView
{
    id _target;
    SEL _action;
    id _param;
    UIView *_topLine;
    UIView *_bottomLine;
    UILabel *_titleLabel;
    UIView *_valueView;
    UIView *_accessoryView;
    long long _accessoryType;
    UIView *_maskView;
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) long long accessoryType; // @synthesize accessoryType=_accessoryType;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) UIView *valueView; // @synthesize valueView=_valueView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(readonly, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) id param; // @synthesize param=_param;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(retain, nonatomic) NSString *value;
- (void)setTitleAlignTop:(_Bool)arg1;
@property(retain, nonatomic) NSString *title;
- (void)setEnabled:(_Bool)arg1;
- (void)setBorderType:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

