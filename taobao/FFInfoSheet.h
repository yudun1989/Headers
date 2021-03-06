//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface FFInfoSheet : UIView
{
    UILabel *_infoLabel;
    UIButton *_closeBtn;
    UIView *_contentView;
}

+ (id)showInfo:(id)arg1 inView:(id)arg2 animated:(_Bool)arg3;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
- (void).cxx_destruct;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showInfo:(id)arg1 inView:(id)arg2 animated:(_Bool)arg3;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

