//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PPChatMessageBaseView.h"

@class UIImage, UIImageView, UILabel;

@interface PPChatRecallMessageView : PPChatMessageBaseView
{
    UILabel *_recallTextLabel;
    UIImageView *_bgView;
    UIImage *_bgViewImage;
}

+ (double)getBottomHeight:(id)arg1;
+ (double)heightForData:(id)arg1 ofMessage:(id)arg2;
@property(retain, nonatomic) UIImage *bgViewImage; // @synthesize bgViewImage=_bgViewImage;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UILabel *recallTextLabel; // @synthesize recallTextLabel=_recallTextLabel;
- (void).cxx_destruct;
- (void)setBgViewImag:(id)arg1;
- (void)loadData:(id)arg1;

@end

