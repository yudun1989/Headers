//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MCRecommandGroupViewProtocol-Protocol.h"

@class NSString, UIButton, UILabel;
@protocol MCRecommandGroupViewDelegate;

@interface MCLongRecommandGroupView : UIView <MCRecommandGroupViewProtocol>
{
    id <MCRecommandGroupViewDelegate> _delegate;
    UILabel *_titleLabel;
    UIView *_footAreaView;
    UIButton *_moreButton;
    UIButton *_moreIconButton;
    NSString *_moreText;
    NSString *_moreURLString;
    unsigned long long _showRowCount;
}

@property(nonatomic) unsigned long long showRowCount; // @synthesize showRowCount=_showRowCount;
@property(copy, nonatomic) NSString *moreURLString; // @synthesize moreURLString=_moreURLString;
@property(copy, nonatomic) NSString *moreText; // @synthesize moreText=_moreText;
@property(retain, nonatomic) UIButton *moreIconButton; // @synthesize moreIconButton=_moreIconButton;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIView *footAreaView; // @synthesize footAreaView=_footAreaView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <MCRecommandGroupViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)moreItemClicked:(id)arg1;
- (void)itemViewItemClick:(id)arg1;
- (void)itemViewSubscribeClick:(id)arg1;
- (unsigned long long)rowCount;
- (void)setContentData:(id)arg1;
@property(copy, nonatomic) NSString *titleText; // @dynamic titleText;
- (id)initWithFrame:(struct CGRect)arg1 data:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

