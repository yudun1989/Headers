//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class EWSwitchHandlebar, UIImage, UILabel;

@interface EWSwitch : UIView
{
    CDUnknownBlockType _valueChangedAction;
    unsigned long long _value;
    UIView *_leftHandle;
    UIView *_rightHandle;
    UIView *_container;
    EWSwitchHandlebar *_handlebar;
    UIImage *_leftIcon;
    UIImage *_rightIcon;
    UILabel *_leftLabel;
    UILabel *_rightLabel;
}

@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(retain, nonatomic) UIImage *rightIcon; // @synthesize rightIcon=_rightIcon;
@property(retain, nonatomic) UIImage *leftIcon; // @synthesize leftIcon=_leftIcon;
@property(retain, nonatomic) EWSwitchHandlebar *handlebar; // @synthesize handlebar=_handlebar;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(retain, nonatomic) UIView *rightHandle; // @synthesize rightHandle=_rightHandle;
@property(retain, nonatomic) UIView *leftHandle; // @synthesize leftHandle=_leftHandle;
@property(nonatomic) unsigned long long value; // @synthesize value=_value;
@property(copy, nonatomic) CDUnknownBlockType valueChangedAction; // @synthesize valueChangedAction=_valueChangedAction;
- (void).cxx_destruct;
- (void)updateTextColor:(unsigned long long)arg1;
- (void)rightTap;
- (void)leftTap;
- (void)valueChanged:(unsigned long long)arg1;
- (void)createSubview;
- (id)init;

@end
