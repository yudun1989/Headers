//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AUBaseListItem.h"

#import "AUDoubleTitleListItemModelDelegate-Protocol.h"

@class AUDoubleContentView, AUListItemModel, NSString, UIImage, UIImageView, UILabel;
@protocol AUDoubleTitleListItemModelDelegate;

@interface AUDoubleTitleListItem : AUBaseListItem <AUDoubleTitleListItemModelDelegate>
{
    long long _style;
    UILabel *_subtitleLabel;
    UIImageView *_leftImageView;
    UILabel *_timeLabel;
    UILabel *_rightAssistLabel;
    AUListItemModel<AUDoubleTitleListItemModelDelegate> *_model;
    AUDoubleContentView *_customContentView;
}

+ (double)cellHeightForStyle:(long long)arg1;
+ (double)cellHeight;
@property(retain, nonatomic) AUDoubleContentView *customContentView; // @synthesize customContentView=_customContentView;
@property(retain, nonatomic) AUListItemModel<AUDoubleTitleListItemModelDelegate> *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *rightAssistLabel; // @synthesize rightAssistLabel=_rightAssistLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *rightAssistString;
@property(copy, nonatomic) NSString *timeString;
@property(nonatomic) struct CGSize leftimageSize;
@property(retain, nonatomic) UIImage *leftImage;
@property(copy, nonatomic) NSString *subtitle;
- (id)titleLabel;
- (void)customInit;
- (id)initWithReuseIdentifier:(id)arg1 customStyle:(long long)arg2;
- (void)setModelBlock:(CDUnknownBlockType)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

