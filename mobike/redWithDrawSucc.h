//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol redSuccdelegate;

@interface redWithDrawSucc : UIView
{
    UIImageView *redSucc;
    UILabel *succNote;
    UILabel *inAccountNote;
    id <redSuccdelegate> _delegate;
    UIView *_allBack;
    UIView *_contentBack;
    UIButton *_detainBtn;
}

@property(retain) UIButton *detainBtn; // @synthesize detainBtn=_detainBtn;
@property(retain) UIView *contentBack; // @synthesize contentBack=_contentBack;
@property(retain) UIView *allBack; // @synthesize allBack=_allBack;
@property id <redSuccdelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)unShow;
- (void)showErrWith:(id)arg1;
- (void)showSuccMsg:(id)arg1 withTitle:(id)arg2;
- (void)detailButtonClicked:(id)arg1;
- (void)initSubViews;
- (id)init;

@end

