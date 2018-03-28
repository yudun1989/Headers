//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface JDKeplerReloadView : UIView
{
    UIImageView *_networkRequestFailImageView;
    UILabel *_networkRequestFailLabel1;
    UILabel *_networkRequestFailLabel2;
    UIButton *_reloadButton;
    CDUnknownBlockType _JDKeplerReloadViewReloadButtonClickdBlock;
}

@property(copy, nonatomic) CDUnknownBlockType JDKeplerReloadViewReloadButtonClickdBlock; // @synthesize JDKeplerReloadViewReloadButtonClickdBlock=_JDKeplerReloadViewReloadButtonClickdBlock;
@property(retain, nonatomic) UIButton *reloadButton; // @synthesize reloadButton=_reloadButton;
@property(retain, nonatomic) UILabel *networkRequestFailLabel2; // @synthesize networkRequestFailLabel2=_networkRequestFailLabel2;
@property(retain, nonatomic) UILabel *networkRequestFailLabel1; // @synthesize networkRequestFailLabel1=_networkRequestFailLabel1;
@property(retain, nonatomic) UIImageView *networkRequestFailImageView; // @synthesize networkRequestFailImageView=_networkRequestFailImageView;
- (void).cxx_destruct;
- (void)reloadButtonClicked;
- (void)reloadSubViewFrame;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
