//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedTableViewCell.h"

@class SSThemedLabel, SSThemedView;
@protocol TTCommentFooterCellDelegate;

@interface TTCommentFooterCell : SSThemedTableViewCell
{
    unsigned long long _type;
    id <TTCommentFooterCellDelegate> _delegate;
    SSThemedView *_separatorView;
    SSThemedLabel *_descLabel;
}

+ (double)cellHeight;
@property(retain, nonatomic) SSThemedLabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) SSThemedView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) __weak id <TTCommentFooterCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)themeChanged:(id)arg1;
- (void)descButtonOnClick:(id)arg1;
- (void)setupViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

