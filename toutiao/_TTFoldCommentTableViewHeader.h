//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

#import "TTUGCAttributedLabelDelegate-Protocol.h"

@class NSString, SSThemedImageView, SSThemedLabel, TTUGCAttributedLabel;

@interface _TTFoldCommentTableViewHeader : SSThemedView <TTUGCAttributedLabelDelegate>
{
    SSThemedLabel *_titleLabel;
    SSThemedImageView *_promptImageView;
    TTUGCAttributedLabel *_contentLabel;
    SSThemedView *_backgroundView;
    CDUnknownBlockType _linkTextOnClicked;
}

@property(copy, nonatomic) CDUnknownBlockType linkTextOnClicked; // @synthesize linkTextOnClicked=_linkTextOnClicked;
@property(retain, nonatomic) SSThemedView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) TTUGCAttributedLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) SSThemedImageView *promptImageView; // @synthesize promptImageView=_promptImageView;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)themeChanged:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

