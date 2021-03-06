//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBVideoTimelineTableViewCell.h"

@class UILabel, WBVideoCollectionButton, WBVideoGradientColorView, WBVideoTimelineAttributedTextView;

@interface WBVideoFeedTableViewCell : WBVideoTimelineTableViewCell
{
    WBVideoTimelineAttributedTextView *_attributedTextView;
    WBVideoGradientColorView *_gradientView;
    UILabel *_playCountLabel;
    double _textViewTopOffsetY;
    UILabel *_durationLabel;
    WBVideoGradientColorView *_bottomGradientView;
    WBVideoCollectionButton *_collectionButton;
}

+ (id)updateStatusLayoutIfNeeded:(id)arg1 tableView:(id)arg2 isFirstRow:(_Bool)arg3;
+ (double)rowHeightOfDataObject:(id)arg1 tableView:(id)arg2 isFirstRow:(_Bool)arg3;
+ (double)rowHeightOfDataObject:(id)arg1 tableView:(id)arg2;
@property(retain, nonatomic) WBVideoCollectionButton *collectionButton; // @synthesize collectionButton=_collectionButton;
@property(retain, nonatomic) WBVideoGradientColorView *bottomGradientView; // @synthesize bottomGradientView=_bottomGradientView;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(nonatomic) double textViewTopOffsetY; // @synthesize textViewTopOffsetY=_textViewTopOffsetY;
@property(retain, nonatomic) UILabel *playCountLabel; // @synthesize playCountLabel=_playCountLabel;
@property(retain, nonatomic) WBVideoGradientColorView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) WBVideoTimelineAttributedTextView *attributedTextView; // @synthesize attributedTextView=_attributedTextView;
- (void).cxx_destruct;
- (void)resetViewsAboveVideoCard;
- (void)showViewsAboveVideoCard;
- (void)hideViewsAboveVideoCard;
- (id)bottomInfocusViews;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setStatus:(id)arg1;
- (_Bool)collectionEnabled;
- (void)setKeyState:(long long)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (void)textExpandButtonPressed:(id)arg1;
- (void)collectionPressed:(id)arg1;
@property(readonly, nonatomic) _Bool shouldHideStatusInfoView;
- (_Bool)isVideoFullScreen;
- (void)favoriteStateDidChangeNotification:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)dealloc;

@end

