//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEActionView, AWEAnimatedButton, UIButton;

@interface AWEPhotoEditorViewContainer : UIView
{
    UIButton *_buttonBack;
    AWEAnimatedButton *_buttonNext;
    AWEActionView *_buttonFilter;
}

+ (void)configActionView:(id)arg1;
+ (id)createButtonWithImage:(id)arg1 title:(id)arg2;
@property(retain, nonatomic) AWEActionView *buttonFilter; // @synthesize buttonFilter=_buttonFilter;
@property(retain, nonatomic) AWEAnimatedButton *buttonNext; // @synthesize buttonNext=_buttonNext;
@property(retain, nonatomic) UIButton *buttonBack; // @synthesize buttonBack=_buttonBack;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

