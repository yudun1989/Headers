//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol MCInputFunctionItemProtocol;

@interface MCChatPageFunctionControl : UIView
{
    UIButton *_button;
    UIView *_tbNewImageView;
    UILabel *_titleLabel;
    id <MCInputFunctionItemProtocol> _functionItem;
}

@property(retain, nonatomic) id <MCInputFunctionItemProtocol> functionItem; // @synthesize functionItem=_functionItem;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *tbNewImageView; // @synthesize tbNewImageView=_tbNewImageView;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)buttonTapped:(id)arg1;
- (void)removeButtonTarget;
- (void)updateFunctionItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
