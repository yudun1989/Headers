//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView, UILabel, UIView;
@protocol MCChatShareShopItemViewDelegate;

@interface MCChatShareShopItemView : UIButton
{
    UIImageView *_innerImageView;
    UIView *_innerTitleBcView;
    UILabel *_innerTitleLabel;
    long long _index;
    id <MCChatShareShopItemViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MCChatShareShopItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) UILabel *innerTitleLabel; // @synthesize innerTitleLabel=_innerTitleLabel;
@property(retain, nonatomic) UIView *innerTitleBcView; // @synthesize innerTitleBcView=_innerTitleBcView;
@property(retain, nonatomic) UIImageView *innerImageView; // @synthesize innerImageView=_innerImageView;
- (void).cxx_destruct;
- (void)itemTapped:(id)arg1;
- (void)updateMessageItem:(id)arg1;
- (void)recycle;
- (id)initWithFrame:(struct CGRect)arg1 index:(long long)arg2 delegate:(id)arg3;

@end

