//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBRateBaseCell.h"

@class TBRateAppendRateComponent, TBRatePlainTextView, TBRateReplyView, TBRateSmallPicturesView;

@interface TBRateAppendRateCell : TBRateBaseCell
{
    TBRateAppendRateComponent *_appendRateComponent;
    TBRatePlainTextView *_rateTextView;
    TBRateSmallPicturesView *_picturesView;
    TBRateReplyView *_replyView;
}

+ (double)viewHeight:(id)arg1;
@property(retain, nonatomic) TBRateReplyView *replyView; // @synthesize replyView=_replyView;
@property(retain, nonatomic) TBRateSmallPicturesView *picturesView; // @synthesize picturesView=_picturesView;
@property(retain, nonatomic) TBRatePlainTextView *rateTextView; // @synthesize rateTextView=_rateTextView;
- (void).cxx_destruct;
- (void)setComponent:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)picClicked:(id)arg1;

@end

