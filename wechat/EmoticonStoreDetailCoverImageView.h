//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMRedHeadLiner, MMWebImageView;

@interface EmoticonStoreDetailCoverImageView : MMUIView
{
    MMRedHeadLiner *m_tagImageView;
    MMWebImageView *m_webImageView;
}

@property(retain, nonatomic) MMWebImageView *m_webImageView; // @synthesize m_webImageView;
@property(retain, nonatomic) MMRedHeadLiner *m_tagImageView; // @synthesize m_tagImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTagHidden:(_Bool)arg1;
- (void)setImageUrl:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

